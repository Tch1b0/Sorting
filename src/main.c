#include "head.h"
#define LENGTH 10

int main()
{
    int numbers[LENGTH] = {5, 3, 6, 1, 7, 0, 4, 2, 9, 8};

    printf("Unsorted:\n");
    prettyPrint(numbers, LENGTH);

    printf("\n\nSorted:\n");
    prettyPrint(gnomeSort(numbers, LENGTH), LENGTH);
    return 0;
}