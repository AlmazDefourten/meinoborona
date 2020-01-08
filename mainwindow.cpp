#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "classes.h"
#include <QtCore>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    unsigned long int textov = ui->_mathEdit->text().toFloat();
    unsigned long long int down = _mathObrabotchik(textov);
    if (down == 0)
        ui->statusbar->showMessage("Nah, I couldn't count it. (Spoiler: there is no solution for this problem, please delete the program)");
    else {
    QString marik = "Your  " + QString::number(down);
    ui->statusbar->showMessage(marik);
    }
}

