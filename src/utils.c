#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

// Get the length of an array
// ! Currently not working
int arrayLength(int array[])
{
    return sizeof &array / sizeof &array;
}

/*
 * Check wether an array is sorted, or not.
 * An array counts as sorted when the numbers on the left are
 * smaller than the numbers on the right
 */
bool isSorted(int nums[], int length)
{
    for (int i = 1; i < length; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            return false;
        }
    };
    return true;
}

// Generate a new Array with 20 random numbers
// ! Currently not working
int *generateArray()
{
    int LENGTH = 20;
    int array[20];

    srand((unsigned)time(NULL));

    for (int i = 0; i < LENGTH; i++)
    {
        array[i] = rand() % LENGTH;
    }

    return array;
}

// Print an Array
void prettyPrint(int arr[], int length)
{
    printf("[ ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");
}