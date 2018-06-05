#ifndef COMPARATOR_H
#define COMPARATOR_H

#include <QString>
#include <iostream>


class Comporator
{
private:

public:
    Comporator() {}

    template<typename T>
    static int Less(T left, T right){
        return left < right;
    }

    template<typename T>
    static int Great(T left, T right){
        return right < left;
    }

    static int CharPtrCompareLess(char* left, char* right){
        return strcmp(left, right);
    }

    //template<char* >
    static int CharPtrCompareGreat(char* left, char* right){
        return strcmp(right, left);
    }
};
#endif // COMPARATOR_H
