#ifndef POSTLISTINGS_H
#define POSTLISTINGS_H

#include <QDialog>

namespace Ui {
class postlistings;
}

class postlistings : public QDialog
{
    Q_OBJECT

public:
    explicit postlistings(QWidget *parent = nullptr);
    ~postlistings();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::postlistings *ui;
};

#endif // POSTLISTINGS_H
