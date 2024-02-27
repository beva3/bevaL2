#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

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

void MainWindow::on_pushButton_Connect_clicked()
{
    // were is ui ??
    QString userName = ui->label_UserName->text();
    QString phoneNumer = ui->label_PhoneNumber->text();
    QString passwdUser = ui->label_Passwd->text();
    if(userName == "test" && phoneNumer == "test" && passwdUser == "test"){
        QMessageBox::information(this,"iformation","sucessful");
    }else{
        QMessageBox::warning(this,"iformation","ueer not found");
    }
}

