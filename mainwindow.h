#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_action_Zamknij_triggered();

    void on_actionZamknij_triggered();

    void on_pushButton_2_clicked();

    void on_actionO_Qt_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int wynik;
    int rekord;

    void readSettings();
    void writeSettings();
};
#endif // MAINWINDOW_H
