#include "studentslogin.h"
#include<QFile>
#include<QMessagebox>

using namespace  std;

Studentslogin::Studentslogin(QString username, QString password)
{
    this ->username = username;
    this ->password = password;
}
bool Studentslogin:: login()

{
    QFile userFile("/Users/moon/211HProject/username.txt");
    QFile passFile("/Users/moon/211HProject/password.txt");
    QString tempuser, temppass;
    bool studentslogin = false;


    if(!userFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(nullptr, "error", "cannot open username.txt");
    }
    QTextStream inuser(&userFile);

    if(!passFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(nullptr, "error", "cannot open password.txt");
    }
    QTextStream inpass(&passFile);


    for (tempuser = inuser.readLine(), temppass = inpass.readLine();
          !tempuser. isNull();
          tempuser = inuser.readLine(), temppass = inpass.readLine())
     {
         if(tempuser == username && temppass ==password)
        {
            studentslogin = true;
             break;
        }
         else
         {
             studentslogin= false;
         }
     }
    userFile.close();
    passFile.close();
    return studentslogin;

}
bool Studentslogin::signup()


{
    QFile userFile("/Users/moon/211HProject/username.txt");
    QFile passFile("/Users/moon/211HProject/password.txt");
    QString tempuser, temppass;
    bool studentssignup = false;

    if(!userFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(nullptr, "error", "cannot open username.txt");
    }
    QTextStream inuser(&userFile);

    if(!passFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(nullptr, "error", "cannot open password.txt");
    }
    QTextStream inpass(&passFile);

    for (tempuser = inuser.readLine(), temppass = inpass.readLine();
         !tempuser. isNull();
         tempuser = inuser.readLine(), temppass = inpass.readLine())
    {
        if(tempuser == username )
        {
            studentssignup = true;
            break;
        }
    }
    userFile.close();
    passFile.close();

    if (!studentssignup) {
        if(!userFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        {
            QMessageBox::warning(nullptr, "error", "cannot open file");
        }
        QTextStream inuser(&userFile);

        if(!passFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        {
            QMessageBox::warning(nullptr, "error", "cannot open file");
        }
        QTextStream inpass(&passFile);

        inuser << username << "\n";
        inpass << password << "\n";
        userFile.close();
        passFile.close();
    }
    return studentssignup;
}
