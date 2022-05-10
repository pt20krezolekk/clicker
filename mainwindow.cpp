#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


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


void MainWindow::on_action_Zamknij_triggered()
{

}


void MainWindow::on_actionZamknij_triggered()
{
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}


void MainWindow::on_actionO_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}

