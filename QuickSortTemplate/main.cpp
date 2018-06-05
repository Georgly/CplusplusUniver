#include <QCoreApplication>
#include "quicksort.h"
#include <QVector>

int main()
{

    QVector<QString> strVector = {"abc", "adg", "rt", "sretfg", "retcfjkn", "azxd", "yf", "rfgh", "zxch"};
    QVector<int> intVector = {23, 45, 6, 7, 8, 90, 87, 65, 43, 2, 3, 89, 236, 68, 95, 33, 4, 76,7, 6789, 7, 6, 8, 5, 3, 4, 2, 1, 43, 245,768, 987, 645, 342, 312, 4356};
    //char* charArr = "dcvbnjhgfv bnml\0";
    char charArray[10] = {'b', 'f', 'f', 'w', ' ', 'q', 'p', 'j', 'i', '\0'};
    char chArr[11] = "Helloworld";
    char* charArr = &chArr[0];
    char **chrPointerArr = new char*[15];

    for(int i = 0; i < 15; i++){
        chrPointerArr[i] = new char[15];
    }
    chrPointerArr[0] = "qadbdvtgsaagq";
    chrPointerArr[1] = "cvhjkoks;acmn";
    chrPointerArr[2] = "hasfbjvlaljkj";
    chrPointerArr[3] = "jvakf;adsg;ac";
    chrPointerArr[4] = "xhnbnmgrsxkqq";
    chrPointerArr[5] = "styjy5ujcmnqq";
    chrPointerArr[6] = "89584eddjfqqq";
    chrPointerArr[7] = "ddkckdjacmnqq";
    chrPointerArr[8] = "b mdjgsyr2qqq";
    chrPointerArr[9] = "ckl;ofjdjfqqq";
    chrPointerArr[10] = "jcjxjcj;oiutq";
    chrPointerArr[11] = "cvhjkoks;cdxq";
    chrPointerArr[12] = "vxzzsdccvbqqq";
    chrPointerArr[13] = "cvhjkoks;4tfq";
    chrPointerArr[14] = "4rfv3edc6yhnq";

    QuickSortTemplate *sort = new QuickSortTemplate();

    sort->quickSort ( &(strVector[0]), 0, strVector.length() - 1, Comporator::Less<QString>);
    sort->quickSort ( &(intVector[0]), 0, intVector.length() - 1, Comporator::Great<int> );
    sort->quickSort ( charArr, 0,  10 - 1, Comporator::Less<char> );
    sort->quickSort( &(charArray[0]), 0, 10 - 1 - 1, Comporator::Less<char>);
    sort->quickSort( &(chArr[0]), 0, 10 - 1, Comporator::Great<char> );
    sort->quickSort( &(chrPointerArr[0]), 0, 15 - 1, Comporator::CharPtrCompareGreat);

    foreach (QString str, strVector) {
        std::cout << str.toStdString() << std::endl;
    }

    foreach (int str, intVector) {
        std::cout << QString::number( str, 10).toStdString() << std::endl;
    }

    while (*(charArr) != '\0') {
        std::cout << *(charArr++) << std::endl;
    }

    std::cout << charArr << std::endl;

    std::cout << charArray << std::endl;
    std::cout << chArr << std::endl;

    for(int i = 0; i<15; i++ ){
        std::cout << chrPointerArr[i] << std::endl;
    }

    return 0;
}
