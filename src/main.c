#include "head.h"
#define LENGTH 10

int main() {
    int test[LENGTH] = {5, 3, 6, 1, 7, 0, 4, 2, 9, 8};

    printf("Unsorted:\n");
    prettyPrint(test, LENGTH);

    printf("\n\nSorted:\n");
    prettyPrint(bubbleSort(test, LENGTH), LENGTH);
    return 0;
}