#ifndef TESTS_H
#define TESTS_H

#include <QObject>
#include <QtTest/QtTest>
#include "func.h"

class Tests : public QObject
{
    Q_OBJECT

private:

    Func func;
public:
    explicit Tests(QObject *parent = nullptr);

signals:

private slots:
    void TestSymbol();
    void TestFullStr();
    void TestNullResult();
    void TestDstArrayIntType();
    void TestSymbolCode();
    void TestLessArrayLength();

public slots:
};

#endif // TESTS_H
