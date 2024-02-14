#include "sort.h"

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

	if (size <= 2)
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

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
