#include "tests.h"

Tests::Tests(QObject *parent) : QObject(parent)
{

}

void Tests::TestSymbol()
{
    char src[20]="hello there";
    char dst[20];

    func.memccpy(dst, src, ' ', 20);
    QCOMPARE(dst, "hello ");
}

void Tests::TestFullStr()
{
    char src[20]="You get nothing.You";
    char dst[20];

    func.memccpy(dst, src, ']', 20);
    QCOMPARE(dst, "You get nothing.You");
}

void Tests::TestNullResult()
{
    char src[20]="You get nothing.You";
    char dst[20];

    //memccpy(dst, src, ']', 20);
    QCOMPARE(func.memccpy(dst, src, ']', 20), nullptr);
}

void Tests::TestDstArrayIntType()
{
    char src[15] = "hello there";
    int dst[15];

    func.memccpy(dst, src, 'o', 20);
    QCOMPARE(((char*)dst), "hello");
}

void Tests::TestSymbolCode()
{
    char src[15] = "hello there";
    char dst[15];

    func.memccpy(dst, src, 32, 20);
    QCOMPARE(dst, "hello ");
}

void Tests::TestLessArrayLength()
{
    char src[20]="You get nothing.You";
    char dst[15] = { 0 };

    func.memccpy(dst, src, '=', 15);
    QCOMPARE(dst, "You get nothing");
}
