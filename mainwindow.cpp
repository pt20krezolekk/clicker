#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSettings>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wynik = 0;
    rekord = 0;
    readSettings();
    ui->labelNajlepszyWynik->setText("Najlepszy wynik: " + QString::number(rekord));
}

MainWindow::~MainWindow()
{
    writeSettings();
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

void MainWindow::on_pushButton_clicked()
{

    wynik++;
    if (wynik > rekord)
        rekord = wynik;

    ui->labelWynik->setText("Wynik: " + QString::number(wynik));
    ui->labelNajlepszyWynik->setText("Najlepszy wynik: " + QString::number(rekord));
}

void MainWindow::writeSettings(){
    QSettings settings("ZSI", "clicker");
    settings.beginGroup("Wyniki");
    settings.setValue("najlepszywynik", rekord);
    settings.endGroup();
}

void MainWindow::readSettings(){
    QSettings settings("ZSI", "clicker");
    settings.beginGroup("Wyniki");
    rekord = settings.value("najlepszywynik", 0).toInt();
    settings.endGroup();

}
