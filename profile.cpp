#include "profile.h"
#include "ui_profile.h"

profile::profile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::profile)
{
    ui->setupUi(this);
    connect(ui->exitBtn_2, &QPushButton::clicked, this, &profile::hide);

}

profile::~profile()
{
    delete ui;
}
