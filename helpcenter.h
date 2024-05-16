#ifndef HELPCENTER_H
#define HELPCENTER_H

#include <QDialog>

namespace Ui {
class HelpCenter;
}

class HelpCenter : public QDialog
{
    Q_OBJECT

public:
    explicit HelpCenter(QWidget *parent = nullptr);
    ~HelpCenter();

private slots:
   // void on_commandLinkButton_clicked();

private:
    Ui::HelpCenter *ui;

};

#endif // HELPCENTER_H
