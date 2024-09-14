#include "statisticform.h"
#include "ui_statisticform.h"

statisticForm::statisticForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statisticForm)
{
    ui->setupUi(this);
}

statisticForm::~statisticForm()
{
    delete ui;
}
