#ifndef USER_H
#define USER_H

#include <QString>
//#include <QMessageBox>
// creat class user
class User{
private:
    QString name;
    QString phone;
    QString passwd;
public:
    User();
    bool connect();
    ~User();
};


#endif // USER_H
