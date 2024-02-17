#include "sort.h"

/**
* swap - swap 2 integers
* @a: first number
* @b: second number
*
* Return: None
*/

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
* selection_sort - Sort array of numbers using selection sort Algorithm
* @array: array of numbers
* @size: size of array
*
* Return: None
*/

void selection_sort(int *array, size_t size)
{

	size_t i, j, min_idx;

	if (!array || !size)
		return;

	if (size == 1)
	{
		print_array(array, size);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			min_idx = i;
			for (j = i; j < size; j++)
			{
				if (array[j] < array[min_idx])
					min_idx = j;
			}
			if (min_idx != i)
			{
				swap(&array[min_idx], &array[i]);
				print_array(array, size);
			}

		}
	}

}
