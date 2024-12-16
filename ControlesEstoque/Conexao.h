#ifndef CONEXAO_H
#define CONEXAO_H
#include "fm_main.h"

class ConexaoDB{
    QSqlDatabase bancoDados;

public:
    ConexaoDB()
    {
        bancoDados= QSqlDatabase::addDatabase("QSQLITE");
    }

    void Close_db()
    {
        bancoDados.close();
    }
    bool open_db()
    {
        //conecao com o db
        QString local=qApp->applicationDirPath();
        QString banco=local+"/DB/controleEstoque.db";
        //garante o caminho do banco de dados
        bancoDados.setDatabaseName(banco);
        if(!bancoDados.open())
        {
            // QMessageBox::warning(this, "Erro", "Banco de dados nao encontrado");
            return false;
        }
        else
        {
            return true;
        }
    }
private:
};




#endif // CONEXAO_H
