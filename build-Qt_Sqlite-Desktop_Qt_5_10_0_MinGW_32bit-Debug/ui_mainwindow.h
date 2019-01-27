/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *btn_delete;
    QPushButton *btn_insert;
    QLabel *lbl_nome;
    QLineEdit *txt_nome;
    QLabel *lbl_senha;
    QLineEdit *txt_senha;
    QLabel *lbl_email;
    QLineEdit *txt_email;
    QPushButton *btn_select;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(713, 426);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 311, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(330, 10, 301, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        btn_delete = new QPushButton(formLayoutWidget);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));

        formLayout->setWidget(0, QFormLayout::FieldRole, btn_delete);

        btn_insert = new QPushButton(formLayoutWidget);
        btn_insert->setObjectName(QStringLiteral("btn_insert"));

        formLayout->setWidget(2, QFormLayout::FieldRole, btn_insert);

        lbl_nome = new QLabel(formLayoutWidget);
        lbl_nome->setObjectName(QStringLiteral("lbl_nome"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lbl_nome);

        txt_nome = new QLineEdit(formLayoutWidget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txt_nome);

        lbl_senha = new QLabel(formLayoutWidget);
        lbl_senha->setObjectName(QStringLiteral("lbl_senha"));

        formLayout->setWidget(6, QFormLayout::LabelRole, lbl_senha);

        txt_senha = new QLineEdit(formLayoutWidget);
        txt_senha->setObjectName(QStringLiteral("txt_senha"));

        formLayout->setWidget(6, QFormLayout::FieldRole, txt_senha);

        lbl_email = new QLabel(formLayoutWidget);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));

        formLayout->setWidget(8, QFormLayout::LabelRole, lbl_email);

        txt_email = new QLineEdit(formLayoutWidget);
        txt_email->setObjectName(QStringLiteral("txt_email"));

        formLayout->setWidget(8, QFormLayout::FieldRole, txt_email);

        btn_select = new QPushButton(formLayoutWidget);
        btn_select->setObjectName(QStringLiteral("btn_select"));

        formLayout->setWidget(1, QFormLayout::FieldRole, btn_select);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 713, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_delete->setText(QApplication::translate("MainWindow", "Delete  (by name)", nullptr));
        btn_insert->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        lbl_nome->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        lbl_senha->setText(QApplication::translate("MainWindow", "Senha", nullptr));
        lbl_email->setText(QApplication::translate("MainWindow", "Email", nullptr));
        btn_select->setText(QApplication::translate("MainWindow", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
