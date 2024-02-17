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
* bubble_sort - Sort array of numbers using bubble sort Algorithm
* @array: array of numbers
* @size: size of array
*
* Return: None
*/

void bubble_sort(int *array, size_t size)
{

	size_t i = 0, j;

	if (!array || !size)
		return;

	if (size == 1)
	{
		print_array(array, size);
	}
	else
	{
		while (i < size)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j + 1] < array[j])
				{
					swap(&array[j + 1], &array[j]);
					print_array(array, size);
				}
			}
			i++;
		}
	}

}
