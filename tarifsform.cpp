#include "tarifsform.h"
#include "ui_tarifsform.h"

tarifsForm::tarifsForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tarifsForm)
{
    ui->setupUi(this);
    connect(ui->exitBtn_2, &QPushButton::clicked, this, &tarifsForm::hide);

}

tarifsForm::~tarifsForm()
{
    delete ui;
}
