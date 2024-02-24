#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_setUsername->text();
    QString passwd = ui->lineEdit_setPasswd->text();

    if(username == "test" && passwd == "test"){
        QMessageBox::information(this,"information","successful");
    }else{
        QMessageBox::warning(this,"warning","again");
    }
}

