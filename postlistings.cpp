#include "postlistings.h"
#include "ui_postlistings.h"
#include <QPixmap>

postlistings::postlistings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::postlistings)
{
    ui->setupUi(this);
    this ->setWindowFlags(Qt::WindowTitleHint |Qt::CustomizeWindowHint);

}

postlistings::~postlistings()
{
    delete ui;
}

void postlistings::on_pushButton_3_clicked()
{
    this ->hide();
}

