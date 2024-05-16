#include "helpcenter.h"
#include "ui_helpcenter.h"

HelpCenter::HelpCenter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HelpCenter)
{
    ui->setupUi(this);
}

HelpCenter::~HelpCenter()
{
    delete ui;
}

//*void HelpCenter::on_commandLinkButton_clicked()
//*{
   // commandLB -> show();
//}
//*/
