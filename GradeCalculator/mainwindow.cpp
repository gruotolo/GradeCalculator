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
    QString hw1 =ui->lineEdit->text();
    QString hw2 = ui->lineEdit_2->text();
    QString hw3 = ui->lineEdit_4->text();
    QString midterm = ui->lineEdit_5->text();
    QString finproj = ui->lineEdit_7->text();
    QString final = ui->lineEdit_6->text();
    if (scheme==true)
        score = (hw2.toDouble()/3) + (hw1.toDouble()/3)+(hw3.toDouble()/3)+(finproj.toDouble()*0.3)+(midterm.toDouble()*0.2)+(final.toDouble()*0.3);
    else
        score = (hw2.toDouble()/3) + (hw1.toDouble()/3)+(hw3.toDouble()/3)+(finproj.toDouble()*0.3)+(final.toDouble()*0.5);
    ui->lineEdit_3->setText(QString::number(score));

}



void MainWindow::on_radioButton_clicked()
{
    scheme = true;

}

void MainWindow::on_radioButton_2_clicked()
{
    scheme = false;
}
