#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using Record = std::vector<std::string>;
using Records = std::vector<Record>;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_create_clicked()
{

    //Opens a connection with the database, if the database does not exist, one is
    //created;

        QFileDialog dialog;
        //QString FileName  = dialog.getExistingDirectory(0,"Caption",QDir::currentPath());
        QString FileName = QFileDialog::getOpenFileName(this,tr("Open DB"), QDir::currentPath());
        sqlite3* DB;
        int exit = 0;
        //Caminho de criação do banco de dados

         QByteArray ba = FileName.toLocal8Bit();
         const char * path_to_db = ba.data();

        //exit = sqlite3_open("C:/Users/user/Documents/Alexandre/C++/SQLite_Qt_teste/Qt_Sqlite/example.db", &DB);
        exit = sqlite3_open(path_to_db, &DB);

        if (exit)
        {
            qDebug() << "Error open DB " << sqlite3_errmsg(DB);
        }
        else
        qDebug() << "Opened Database Successfully!";
        sqlite3_close(DB);

}

void MainWindow::on_btn_create_table_clicked()
{
        std::string sql = "CREATE TABLE PERSON("
                          "ID INT PRIMARY KEY     NOT NULL, "
                          "NAME           TEXT    NOT NULL, "
                          "SURNAME        TEXT    NOT NULL, "
                          "AGE            INT     NOT NULL, "
                          "ADDRESS        CHAR(50), "
                          "SALARY         REAL );";

        sqlite3* DB;

        int exit = 0;
        exit = sqlite3_open("C:/Users/user/Documents/Alexandre/C++/SQLite_Qt_teste/Qt_Sqlite/example.db", &DB);
        char* messaggeError;
        exit = sqlite3_exec(DB, sql.c_str(), nullptr, 0, &messaggeError);

        if (exit != SQLITE_OK)
        {
            qDebug() << "Error Create Table \n";
            sqlite3_free(messaggeError);
        }
        else
            qDebug() << "Table created Successfully \n";
        sqlite3_close(DB);

}

void MainWindow::on_btn_select_clicked()
{

    QString FileName = QDir::currentPath() + "/mrp_db.db";
    QByteArray ba = FileName.toLocal8Bit();
    const char * path_to_db = ba.data();

    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open(path_to_db, &DB);

    std::vector<std::vector<std::string>> query_result;
    sqlite3_exec(DB,"SELECT * from user",db_callback, &query_result,nullptr);
    sqlite3_close(DB);

    for(int i=0;i<query_result.size();i++)
    {
        for(int j=0; j<query_result[i].size();j++)
        {
            std::cout << query_result[i][j] << " ";
        }
        std::cout << "\n";
    }

    QStandardItemModel * pModel = new QStandardItemModel(this);
    QList<QStandardItem*> items;
    pModel->appendRow(items);
    for(size_t i =0;i<query_result.size();i++)
    {
        QList<QStandardItem*> items;
        for(size_t j = 0; j<query_result[i].size();j++)
        {
            QStandardItem * pItem = new QStandardItem(query_result[i][j].c_str());
            items.push_back(pItem);
        }
        pModel->appendRow(items);
    }
    ui->tableView->setModel(pModel);

}

int MainWindow::db_callback(void *p_data, int num_fields, char **p_fields, char **p_col_names)
{
    /*
     * The function sqlite3_exec calls the callback function as many times as the result from the
     * query, ex. ig the result has 4 rows, it is called 4 times, for every time it is called, the
     * count holds the number of columns
     */
    std::vector<std::vector<std::string>>* query_result = static_cast<std::vector<std::vector<std::string>>*>(p_data);
    try
    {
        query_result->emplace_back(p_fields, p_fields + num_fields);
    }
     catch (...)
     {
       return 1;
     }
     return 0;

}

void MainWindow::on_btn_insert_clicked()
{
    std::vector<std::string> param(3);
    param[0] = ui->txt_nome->text().toStdString();
    param[1] = ui->txt_email->text().toStdString();
    param[2] = ui->txt_senha->text().toStdString();

    QString FileName = QDir::currentPath() + "/mrp_db.db";
    QByteArray ba = FileName.toLocal8Bit();
    const char * path_to_db = ba.data();

    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open(path_to_db, &DB);
    const char * sql_insert_stm = create_insert_statement(param);
    std::vector<std::vector<std::string>> query_result;
    //sqlite3_exec(DB,"INSERT INTO user (name, password, email) VALUES('alguem', 'eu', 'ninguem');",db_callback, nullptr,nullptr);
    sqlite3_exec(DB,sql_insert_stm,db_callback, nullptr,nullptr);

    sqlite3_exec(DB,"SELECT * from user",db_callback, &query_result,nullptr);
    sqlite3_close(DB);

    for(int i=0;i<query_result.size();i++)
    {
        for(int j=0; j<query_result[i].size();j++)
        {
            std::cout << query_result[i][j] << " ";
        }
        std::cout << "\n";
    }

    QStandardItemModel * pModel = new QStandardItemModel(this);
    QList<QStandardItem*> items;
    pModel->appendRow(items);
    for(size_t i =0;i<query_result.size();i++)
    {
        QList<QStandardItem*> items;
        for(size_t j = 0; j<query_result[i].size();j++)
        {
            QStandardItem * pItem = new QStandardItem(query_result[i][j].c_str());
            items.push_back(pItem);
        }
        pModel->appendRow(items);
    }
    ui->tableView->setModel(pModel);


    sqlite3_close(DB);

    ui->txt_email->text() = "";
    ui->txt_nome->text() = "";
    ui->txt_senha->text() = "";
}

const char *MainWindow::create_insert_statement(std::vector<std::string> param)
{

    std::string string_stm("INSERT INTO user(name,password,email) VALUES('" + param[0] + "', '" + param[1] + "', '" + param[2] + "')");
    const char* cstr = string_stm.c_str();
    return cstr;

}

const char *MainWindow::create_delete_statement(std::vector<std::string> param)
{
    param[0] = ui->txt_nome->text().toStdString();
    param[1] = ui->txt_email->text().toStdString();
    param[2] = ui->txt_senha->text().toStdString();

//    std::string string_stm("DELETE FROM user WHERE "
//                           "name = '" + param[0] + "' OR "
//                           "email = '" + param[1] + "' OR "
//                           "password = '" + param[2] + "';");
    std::string string_stm("DELETE FROM user WHERE name = '" + param[0] + "'");
    const char* cstr = string_stm.c_str();
    return cstr;
}

void MainWindow::on_btn_delete_clicked()
{
    std::vector<std::string> param(3);
    param[0] = ui->txt_nome->text().toStdString();
    param[1] = ui->txt_email->text().toStdString();
    param[2] = ui->txt_senha->text().toStdString();

    QString FileName = QDir::currentPath() + "/mrp_db.db";
    QByteArray ba = FileName.toLocal8Bit();
    const char * path_to_db = ba.data();

    sqlite3* DB;
    int exit = 0;
    exit = sqlite3_open(path_to_db, &DB);
    const char * sql_insert_stm = create_delete_statement(param);
    std::vector<std::vector<std::string>> query_result;
    //sqlite3_exec(DB,"INSERT INTO user (name, password, email) VALUES('alguem', 'eu', 'ninguem');",db_callback, nullptr,nullptr);
    sqlite3_exec(DB,sql_insert_stm,db_callback, nullptr,nullptr);

    sqlite3_exec(DB,"SELECT * from user",db_callback, &query_result,nullptr);
    sqlite3_close(DB);

    for(int i=0;i<query_result.size();i++)
    {
        for(int j=0; j<query_result[i].size();j++)
        {
            std::cout << query_result[i][j] << " ";
        }
        std::cout << "\n";
    }

    QStandardItemModel * pModel = new QStandardItemModel(this);
    QList<QStandardItem*> items;
    pModel->appendRow(items);
    for(size_t i =0;i<query_result.size();i++)
    {
        QList<QStandardItem*> items;
        for(size_t j = 0; j<query_result[i].size();j++)
        {
            QStandardItem * pItem = new QStandardItem(query_result[i][j].c_str());
            items.push_back(pItem);
        }
        pModel->appendRow(items);
    }
    ui->tableView->setModel(pModel);


    sqlite3_close(DB);

    ui->txt_email->text() = "";
    ui->txt_nome->text() = "";
    ui->txt_senha->text() = "";
}
