#include "statisticform.h"
#include "ui_statisticform.h"

statisticForm::statisticForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statisticForm)
{
    ui->setupUi(this);
    connect(ui->exitBtn_2, &QPushButton::clicked, this, &statisticForm::hide);

}

statisticForm::~statisticForm()
{
    delete ui;
}
