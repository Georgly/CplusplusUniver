#include <QCoreApplication>
#include "func.h"
#include "tests.h"

int main(void)
{
    Tests tests;
    QTest::qExec(&tests);

    return 0;
}
