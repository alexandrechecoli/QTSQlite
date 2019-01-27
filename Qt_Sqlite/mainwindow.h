#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QFile>
#include <QDebug>
#include <QSqlQuery>
#include "sqlite3.h"
#include <QFileDialog>
#include <vector>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_create_clicked();

    void on_btn_create_table_clicked();

    void on_btn_select_clicked();

    static int db_callback(void *p_data, int num_fields, char **p_fields, char **p_col_names);

    void on_btn_insert_clicked();

    const char *create_insert_statement(std::vector<std::string> param);

    const char * create_delete_statement(std::vector<std::string> param);

    void on_btn_delete_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
