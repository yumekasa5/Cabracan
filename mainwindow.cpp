#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 盤面のサイズ
    ui->boad11->setFixedSize(200,200);
    ui->boad12->setFixedSize(200,200);
    ui->boad13->setFixedSize(200,200);
    ui->boad14->setFixedSize(200,200);
    ui->boad15->setFixedSize(200,200);
    ui->boad16->setFixedSize(200,200);
    ui->boad17->setFixedSize(200,200);
    ui->boad18->setFixedSize(200,200);
    ui->boad19->setFixedSize(200,200);


    ui->boad11->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

