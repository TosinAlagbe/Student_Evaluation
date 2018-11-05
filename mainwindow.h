#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registerdialog.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:


private slots:
    void registerButtonClicked();


private:
    Ui::MainWindow *ui;
    RegisterDialog *regDialog;

};

#endif // MAINWINDOW_H
