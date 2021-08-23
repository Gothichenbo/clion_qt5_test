//
// Created by chen on 2021/8/21.
//

#ifndef QT5_TEST_TEST1_H
#define QT5_TEST_TEST1_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class test1; }
QT_END_NAMESPACE

class test1 : public QWidget {
Q_OBJECT

public:
    explicit test1(QWidget *parent = nullptr);

    ~test1() override;

private:
    Ui::test1 *ui;
};


#endif //QT5_TEST_TEST1_H
