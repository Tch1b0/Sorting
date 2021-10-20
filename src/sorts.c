int *bubbleSort(int array[], int length)
{
    int tmp;

    while (!isSorted(array, length))
    {
        for (int i = 1; i < length; i++)
        {
            if (array[i - 1] > array[i])
            {
                tmp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = tmp;
            }
        }
    }

    return array;
}

int *gnomeSort(int array[], int length)
{
    int tmp;
    for (int i = 1; i < length; i++)
    {
        for (int j = i; j > 0 && array[j - 1] > array[j]; j--)
        {
            tmp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = tmp;
        }
    }

    return array;
}
