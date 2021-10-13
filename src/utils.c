#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define UTILS

// Get the length of an array
int arrayLength(int array[]) {
    return (sizeof &array / sizeof &array[0]) + 1;
}

/*
 * Check wether an array is sorted, or not.
 * An array counts as sorted when the numbers on the left are 
 * smaller than the numbers on the right
 */
bool isSorted(int nums[]) {
    const int LENGTH = arrayLength(nums);
    for(int i = 1; i < LENGTH; i++) {
        if(nums[i - 1] > nums[i]) {
            return false;
        }
    };
    return true;
}

// Generate a new Array with 20 random numbers
int* generateArray() {
    const int LENGTH = 20;
    int array[20];

    srand((unsigned) time(NULL));
    
    for(int i = 0; i < LENGTH; i++) {
        array[i] = rand() % LENGTH;
    }

    return array;
}

void prettyPrint(int arr[]) {
    int LENGTH = arrayLength(arr);

    printf("[ ");
    for(int i = 0; i < LENGTH; i++) {
        printf("%d ", arr[i]);
    }
    printf("]");
}