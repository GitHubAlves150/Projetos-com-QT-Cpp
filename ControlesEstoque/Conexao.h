#ifndef CONEXAO_H
#define CONEXAO_H
#include "fm_main.h"

class ConexaoDB{
    QSqlDatabase bancoDados;

public:
    //conecao com o db
    QString local;
    QString banco;
    //garante o caminho do banco de dados
    ConexaoDB()
    {
        bancoDados= QSqlDatabase::addDatabase("QSQLITE");
        //conecao com o db
         local=qApp->applicationDirPath();
         banco=local+"/DB/controleEstoque.db";
        //garante o caminho do banco de dados
    }

    void Close_db()
    {
        bancoDados.close();
    }
    bool open_db()
    {

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
bool aberto()
    {
    if(bancoDados.isOpen())
    {
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
