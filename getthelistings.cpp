#include "getthelistings.h"
#include "ui_getthelistings.h"
#include<QFile>
#include<QMessagebox>

Getthelistings::Getthelistings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Getthelistings)
{
    ui->setupUi(this);

    }

Getthelistings::~Getthelistings()
{
    delete ui;
}


void Getthelistings::on_pushButton_clicked()
{
    QString budget = ui -> lineEdit_budget -> text();
    QString gender = ui -> lineEdit_gender -> text();
    QString single = ui -> lineEdit_single -> text();

    QFile listings("/Users/moon/211HProject/getroom.txt");

    if(!listings.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
    {
        QMessageBox::warning(nullptr, "error", "cannot open file");
    }
    QTextStream inListing(&listings);

    inListing << budget << "\n";
    inListing << gender << "\n";
    inListing << single << "\n";

    listings.close();
}
