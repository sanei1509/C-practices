#include "sort.h"
/**
 *bubble_sort - function that implements the bubble sort algorithm
 *@array: array of numbers type int
 *@size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	unsigned int pos = 0;
	unsigned int i = 0;
	unsigned int swp = 0;

	for(pos = 0 ; pos < size - 1; pos++)
	{
		for (i = 0 ; i < size - pos - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swp;
				print_array(array, size);
			}
		}
	}
}