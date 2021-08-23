//
// Created by chen on 2021/8/20.
//

#ifndef QT5_TEST_MAINWINDOW_H
#define QT5_TEST_MAINWINDOW_H

#include <QMainWindow>
#include "ui_mywidget.h"

namespace  Ui{
    class  MainWindow;
}

class MainWindow: public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent= nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    private slots:
    void ValueChanged(int value);
};


#endif //QT5_TEST_MAINWINDOW_H
