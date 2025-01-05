#include "serialconection.h"
#include <windows.h>
#include <iostream>

SerialConection::SerialConection() {

public:
    SerialConnection(const char* portName) {
        // Abre a porta serial
        hSerial = CreateFile(
            portName,
            GENERIC_READ | GENERIC_WRITE,
            0,
            NULL,
            OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL,
            NULL
            );

        if (hSerial == INVALID_HANDLE_VALUE) {
            std::cerr << "Erro ao abrir porta serial!" << std::endl;
        } else {
            DCB dcbSerialParams = { 0 };
            dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

            if (!GetCommState(hSerial, &dcbSerialParams)) {
                std::cerr << "Erro ao obter configurações da porta serial!" << std::endl;
                CloseHandle(hSerial);
                hSerial = INVALID_HANDLE_VALUE;
            } else {
                // Configurações da porta serial
                dcbSerialParams.BaudRate = CBR_9600;
                dcbSerialParams.ByteSize = 8;
                dcbSerialParams.StopBits = ONESTOPBIT;
                dcbSerialParams.Parity = NOPARITY;

                if (!SetCommState(hSerial, &dcbSerialParams)) {
                    std::cerr << "Erro ao configurar porta serial!" << std::endl;
                    CloseHandle(hSerial);
                    hSerial = INVALID_HANDLE_VALUE;
                }
            }
        }
    }

    ~SerialConnection() {
        if (hSerial != INVALID_HANDLE_VALUE) {
            CloseHandle(hSerial);
        }
    }

    void sendData(const char* data) {
        if (hSerial != INVALID_HANDLE_VALUE) {
            DWORD bytesWritten;
            if (!WriteFile(hSerial, data, strlen(data), &bytesWritten, NULL)) {
                std::cerr << "Erro ao enviar dados!" << std::endl;
            }
        } else {
            std::cerr << "Porta serial não está aberta!" << std::endl;
        }
    }

private:
    HANDLE hSerial;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Configuração da porta serial (exemplo: COM3)
    serial = new SerialConnection("COM3"); // Altere para a porta correspondente ao seu STM32
}

MainWindow::~MainWindow()
{
    delete serial;
    delete ui;
}

void MainWindow::on_btnControlLed_clicked()
{
    // Envia comando para ligar/desligar o LED
    serial->sendData("TOGGLE_LED\n"); // Exemplo de comando para o STM32
}
