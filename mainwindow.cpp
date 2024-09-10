#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sidemenu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    sm(new sidemenu(this))
{
    ui->setupUi(this);

    connect(ui->menubutton, &QPushButton::clicked, this, &MainWindow::toggleMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toggleMenu()
{
    sm->show();
    qDebug() << "showed";
}

