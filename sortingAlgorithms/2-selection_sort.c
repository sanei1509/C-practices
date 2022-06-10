#include "sort.h"

/**
*selection_sort - sort and array in ascending order
*@array: array of elements
*@size: size of array
*/

void selection_sort(int *array, size_t size)
{
    unsigned int i = 0, j = 0, jMin = 0;
    int aux = 0;

    for (i = 0; i < size; i++)
    {
        jMin = i;
        for (j = i+1; j < size; j++)
        {
            if (array[j] < array[jMin])
            {
                jMin = j;
            }
        }

        if (jMin != i) 
        {
            aux = array[i];
            array[i] = array[jMin];
            array[jMin] = aux;
            print_array(array, size);
        }
    }
}