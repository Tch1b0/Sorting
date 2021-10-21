#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

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