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
* lomutoPartition - lomutoPartition Algorithm
* @A: array of numbers
* @low:left partition
* @high: right partition
*
* Return: None
*/

int lomutoPartition(int *A, int low, int high)
{
	int pivot, i, j;

	pivot = A[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (pivot >= A[j])
		{
		i += 1;
		swap(&A[i], &A[j]);
		}
	}
	swap(&A[i + 1], &A[high]);
	return (i + 1);

}

/**
* quicksort - Sort array of numbers using lomutoPartition Algorithm
* @A: array of numbers
* @low:left partition
* @high: right partition
* @size: array size
*
* Return: None
*/

void quicksort(int *A, int low, int high, size_t size)
{
	int r;

	if (low < high)
	{
		r = lomutoPartition(A, low, high);
		print_array(A, size);
		quicksort(A, low, r - 1, size);
		quicksort(A, r + 1, high, size);
	}
}


/**
* quick_sort - Sort array of numbers using quick sort Algorithm
* @array: array of numbers
* @size: size of array
*
* Return: None
*/

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	quick_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
