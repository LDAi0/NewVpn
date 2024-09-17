#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sidemenu.h"
#include "profile.h"
#include "statisticform.h"
#include "tarifsform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->menubutton, &QPushButton::clicked, this, &MainWindow::toggleMenu);
    connect(ui->statisticBtn, &QPushButton::clicked, this, &MainWindow::StatisticMenu);
    connect(ui->tarifsBtn, &QPushButton::clicked, this, &MainWindow::TarifsMenu);
    connect(ui->profileBtn, &QPushButton::clicked, this, &MainWindow::ProfileMenu);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toggleMenu()
{
    sidemenu *sm = new sidemenu(this);
    sm->show();
    qDebug() << "showed";
}

void MainWindow::StatisticMenu()
{
    statisticForm *sf = new statisticForm(this);
    sf->show();
    qDebug() << "showed";
}

void MainWindow::TarifsMenu()
{
    tarifsForm *tf = new tarifsForm(this);
    tf->show();
    qDebug() << "showed";

}

void MainWindow::ProfileMenu()
{
    profile *pf = new profile(this);
    pf->show();
    qDebug() << "showed";
}

