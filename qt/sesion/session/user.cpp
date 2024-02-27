#include "user.h"
#include "mainwindow.h"
User::User() {}

bool User::connect(){

    this->name = Ui::ui->label_UserName->text();
    this->phone = Ui::ui->label_PhoneNumber->text();
    this->passwd= Ui::ui->label_Passwd->text();
    if(this->name== "test" && this->phone == "test" && this->passwd == "test"){
        //QMessageBox::information(this,"iformation","sucessful");
        return true;
    }else{
        //QMessageBox::warning(this,"iformation","ueer not found");
        return false;
    }
}
