#include "tarifsform.h"
#include "ui_tarifsform.h"

tarifsForm::tarifsForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tarifsForm)
{
    ui->setupUi(this);
}

tarifsForm::~tarifsForm()
{
    delete ui;
}
