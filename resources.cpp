#include "resources.h"
#include "ui_resources.h"

resources::resources(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::resources)
{
    ui->setupUi(this);
    this ->setWindowFlags(Qt::WindowTitleHint |Qt::CustomizeWindowHint);
    ui ->helpcenter->addItem(QIcon(":/rec/download.jpeg"),"Emergency Alert System");
    ui ->helpcenter->addItem(QIcon(":/rec/png2.jpg"),"Legal Clinic");
    ui ->helpcenter->addItem(QIcon(":/rec/download.png"),"Off-Campus Service Office ");
}

resources::~resources()
{
    delete ui;
}

void resources::on_pushButton_clicked()
{
    this ->hide();
}

