#ifndef UTILS
#include "utils.c"
#endif

int* bubbleSort(int array[]) {
    const int LENGTH = arrayLength(array) + 1;
    int tmp;

    while(!isSorted(array)) {
        for(int i = 1; i < LENGTH; i++) {
            if (array[i-1] > array[i]) {
                tmp = array[i-1];
                array[i-1] = array[i];
                array[i] = tmp;
            }
        }
    }

    return array;
}