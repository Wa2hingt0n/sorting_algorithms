#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the insertion sort algorithm
 * @list: Doubly linked list of integers to be sorted
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *mid, *temp;

	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;

	for (tmp = (*list)->next; tmp != NULL; tmp = temp)
	{
		temp = tmp->next;
		mid = tmp->prev;
		while (mid != NULL && tmp->n < mid->n)
		{
			mid->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = mid;
			tmp->prev = mid->prev;
			tmp->next = mid;
			if (mid->prev != NULL)
				mid->prev->next = tmp;
			else
				*list = tmp;
			mid->prev = tmp;
			mid = tmp->prev;
			print_list(*list);
		}
	}

}
