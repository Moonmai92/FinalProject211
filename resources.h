#ifndef RESOURCES_H
#define RESOURCES_H

#include <QDialog>

namespace Ui {
class resources;
}

class resources : public QDialog
{
    Q_OBJECT

public:
    explicit resources(QWidget *parent = nullptr);
    ~resources();

private slots:
    void on_pushButton_clicked();

private:
    Ui::resources *ui;
};

#endif // RESOURCES_H
