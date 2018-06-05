#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "comparator.h"


class QuickSortTemplate{

public:
    template< typename T, typename CompareFunc >
    void quickSort(T *a, long left, long right, CompareFunc cmp)
    {
        long i = left, j = right;
        T temp, p;

        p = *(a + ( left + right ) / 2);

        while ( i <= j ) {
            while ( cmp( (*( a + i )), p ) > 0 )
                i++;
            while ( cmp( p, *( a + j ) ) > 0 )
                j--;

            if (i <= j) {
                temp = *( a + i );
                *( a + i ) = *( a + j );
                *( a + j ) = temp;
                i++;
                j--;
            }
        }

        if ( left < j ){
            quickSort( a, left, j, cmp );
        }
        if ( i < right ){
            quickSort( a, i, right, cmp );
        }
    }

};
#endif // QUICKSORT_H
