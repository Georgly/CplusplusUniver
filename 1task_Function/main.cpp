#include <QCoreApplication>
#include "func.h"

int main(void)
{
    unsigned char src[15]="hello there";

       // Массив приемник данных
       unsigned char dst[15]="";

       // Копируем данные из массива src в массив dst
       char a = *static_cast<char*>(memccpy(dst, src, ' ', 15));

       // Вывод массива dst на консоль
       printf ("dst: %s\n",dst);
       printf("last: %s\n", a);

    return 0;
}
