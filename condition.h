#ifndef CONDITION_H
#define CONDITION_H

#include <QDialog>

namespace Ui {
class condition;
}

class condition : public QDialog
{
    Q_OBJECT

public:
    explicit condition(QWidget *parent = nullptr);
    bool Ok();
    ~condition();

private slots:
    void on_pushButton_clicked();

private:
    Ui::condition *ui;
    bool ok = false;
};

#endif // CONDITION_H
