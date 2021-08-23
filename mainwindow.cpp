//
// Created by chen on 2021/8/20.
//

#include "mainwindow.h"
#include "ui_mywidget.h"

MainWindow::MainWindow(QWidget *parent):
QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->dial,&QDial::valueChanged,this,&MainWindow::ValueChanged);
    connect(ui->horizontalSlider,&QSlider::valueChanged,this,&MainWindow::ValueChanged);
    connect(ui->verticalScrollBar,&QSlider::valueChanged,this,&MainWindow::ValueChanged);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::ValueChanged(int value) {
    ui->dial->setValue(value);
    ui->horizontalSlider->setValue(value);
    ui->verticalScrollBar->setValue(value);
}
