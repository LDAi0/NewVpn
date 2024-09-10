#include "sidemenu.h"
#include "ui_sidemenu.h"

sidemenu::sidemenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sidemenu), animation(new QPropertyAnimation(this, "geometry"))
{
    ui->setupUi(this);
    this->setGeometry(0,0,300,650);

    animation->setDuration(300);
}

sidemenu::~sidemenu()
{
    delete ui;
}

void sidemenu::slideIn()
{
    if (!isVisible) {
        animation->setStartValue(QRect(parentWidget()->width(), 0, this->width(), this->height()));  // Начальное положение за экраном
        animation->setEndValue(QRect(parentWidget()->width() - this->width(), 0, this->width(), this->height()));  // Конечное положение (внутри окна)
        animation->start();
        isVisible = true;
    }
}

void sidemenu::slideOut()
{
    if (isVisible) {
        animation->setStartValue(QRect(parentWidget()->width() - this->width(), 0, this->width(), this->height()));  // Начальное положение (внутри окна)
        animation->setEndValue(QRect(parentWidget()->width(), 0, this->width(), this->height()));  // Конечное положение за экраном
        animation->start();
        isVisible = false;
    }
}
