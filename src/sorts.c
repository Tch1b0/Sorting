#ifndef UTILS
#include "utils.c"
#endif

int* bubbleSort(int array[], int length) {
    int tmp;

    while(!isSorted(array, length)) {
        for(int i = 1; i < length; i++) {
            if (array[i-1] > array[i]) {
                tmp = array[i-1];
                array[i-1] = array[i];
                array[i] = tmp;
            }
        }
    }

    return array;
}