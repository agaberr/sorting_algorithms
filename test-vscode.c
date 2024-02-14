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
