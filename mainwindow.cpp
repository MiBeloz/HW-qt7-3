#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_sum_clicked() {
    int val_1 = 0;
    int val_2 = 0;
    int result = 0;
    QString res;

    val_1 = ui->lineEdit_value1->text().toInt();
    val_2 = ui->lineEdit_value2->text().toInt();
    result = val_1 + val_2;

    res = QString::number(result);

    ui->listWidget->addItem(res);
}

void MainWindow::on_pushButton_subtract_clicked() {
    int val_1 = 0;
    int val_2 = 0;
    int result = 0;
    QString res;

    val_1 = ui->lineEdit_value1->text().toInt();
    val_2 = ui->lineEdit_value2->text().toInt();
    result = val_1 - val_2;

    res = QString::number(result);

    ui->listWidget->addItem(res);
}
