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
* insertion_sort_list - Sort list of numbers using insertion sort Algorithm
* @list: list of numbers
*
* Return: None
*/

void insertion_sort_list(listint_t **list)
{

	listint_t *current, *temp, *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current->next;
		prev = current->prev;

		while (prev && prev->n > current->n)
		{
			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;
			current->next = prev;
			current->prev = prev->prev;
			prev->prev = current;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;
			prev = current->prev;
			print_list(*list);
		}
		current = temp;
	}

}
