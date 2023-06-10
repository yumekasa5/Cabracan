#include "mainwindow.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    printf("OK\n");
    qDebug() << "I am SoftwareEngineer!";
    return a.exec();
}
