#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    double score=0;
    QString grade1 =ui->lineEdit->text();
    QString grade2 = ui->lineEdit_2->text();
    score = grade2.toDouble() + grade1.toDouble();
    //double score =static_cast<double>100;
    ui->lineEdit_3->setText(QString::number(score));

}


































