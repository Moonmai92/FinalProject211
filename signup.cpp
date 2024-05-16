#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include "studentslogin.h"

signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_signup_clicked()
{
    QString username = ui -> lineEdit_user -> text();
    QString password = ui -> lineEdit_pass -> text();

    Studentslogin myStudent(username, password);
    if (!myStudent.signup()) {
        QMessageBox::information(this, "Sign up", "Sign up Successfull.");
        close();
    }
    else {
        QMessageBox::warning(this, "Sign up", "username already in use.");
    }

}

