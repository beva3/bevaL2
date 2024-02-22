#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

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

void MainWindow::on_writePushButton_clicked()
{
    QFile f("/home/raphael/Desktop/programmation/qt/exo1/myTesteFile.txt");

    if(!f.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"warning","Error");
    }else{
        QTextStream out(&f);
        QString text =  ui->plainTextEdit->toPlainText();
        out << text;
        f.flush();
        QMessageBox::information(this,"information","successful");
    }
    f.close();
}

