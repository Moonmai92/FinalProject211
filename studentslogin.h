#ifndef STUDENTSLOGIN_H
#define STUDENTSLOGIN_H

#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class Studentslogin
{
public:
    Studentslogin(QString, QString);
    bool login();
    bool signup();

private:
    QString username;
    QString password;
};

#endif // STUDENTSLOGIN_H
