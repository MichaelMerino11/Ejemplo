#include "condition.h"
#include "ui_condition.h"

condition::condition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::condition)
{
    ui->setupUi(this);
}

bool condition::Ok()
{
    return ok;
}

condition::~condition()
{
    delete ui;
}

void condition::on_pushButton_clicked()
{
    ok = true;
}

