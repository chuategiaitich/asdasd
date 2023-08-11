#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    robot<<"Select robot type ..."<<"agv"<<"arm"<<"cobot"<<"human robot";
    ui->comboBox->addItems(robot);
    ui->tableWidget->setRowCount(1);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString name=ui->comboBox->currentText();
    if(name=="agv")
    {
    ui->textEdit->setText("China");
    ui->textEdit_2->setText("1200 ($)");
    ui->textEdit_3->setText("5 (km)");
    ui->textEdit_4->setText("Yes");
    ui->textEdit_5->setText("6 (kg)");
    }
    else if(name=="arm")
    {
    ui->textEdit->setText("America");
    ui->textEdit_2->setText("1000 ($)");
    ui->textEdit_3->setText("3 (m)");
    ui->textEdit_4->setText("No");
    ui->textEdit_5->setText("15 (kg)");
    }
    else if(name=="cobot")
    {
    ui->textEdit->setText("China");
    ui->textEdit_2->setText("250 ($)");
    ui->textEdit_3->setText("3 (m)");
    ui->textEdit_4->setText("No");
    ui->textEdit_5->setText("7 (kg)");
    }
    else if(name=="human robot")
    {
    ui->textEdit->setText("Japan");
    ui->textEdit_2->setText("2000 ($)");
    ui->textEdit_3->setText("2 (km)");
    ui->textEdit_4->setText("Yes");
    ui->textEdit_5->setText("120 (kg)");
    }
}

