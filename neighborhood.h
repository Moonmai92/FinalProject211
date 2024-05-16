#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H

#include <QDialog>

namespace Ui {
class neighborhood;
}

class neighborhood : public QDialog
{
    Q_OBJECT

public:
    explicit neighborhood(QWidget *parent = nullptr);
    ~neighborhood();

private slots:
    void on_pushButton_clicked();

private:
    Ui::neighborhood *ui;
};

#endif // NEIGHBORHOOD_H
