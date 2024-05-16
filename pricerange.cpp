#include "pricerange.h"
#include "ui_pricerange.h"
#include"QSpinBox"
#include"QLabel"

PriceRange::PriceRange(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PriceRange)
{
    ui->setupUi(this);
}

PriceRange::~PriceRange()
{
    delete ui;
}


