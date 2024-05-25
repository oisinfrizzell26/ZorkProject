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

void MainWindow::appendOutput(const QString &message)
{
    ui->plainTextEdit->appendPlainText(message);
}

void MainWindow::on_southButton_clicked()
{
    appendOutput("South button clicked");
}

void MainWindow::on_eastButton_clicked()
{
    appendOutput("East button clicked");
}

void MainWindow::on_westButton_clicked()
{
    appendOutput("West button clicked");
}

void MainWindow::on_northButton_clicked()
{
    appendOutput("North button clicked");
}
