//
// Created by chen on 2021/8/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_test1.h" resolved

#include "test1.h"
#include "ui_test1.h"


test1::test1(QWidget *parent) :
        QWidget(parent), ui(new Ui::test1) {
    ui->setupUi(this);
}

test1::~test1() {
    delete ui;
}

