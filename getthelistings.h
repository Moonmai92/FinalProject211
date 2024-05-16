#ifndef GETTHELISTINGS_H
#define GETTHELISTINGS_H

#include <QDialog>

namespace Ui {
class Getthelistings;
}

class Getthelistings : public QDialog
{
    Q_OBJECT

public:
    explicit Getthelistings(QWidget *parent = nullptr);
    ~Getthelistings();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Getthelistings *ui;
};

#endif // GETTHELISTINGS_H
