#include "sort.h"

/**
 * insertion_sort_list - sorts a doublylinked using the Insertion sort algo
 * @list: list of int
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *newNode;

	if (!list || !(*list)->next)
		return;
	newNode = (*list)->next;

	while (newNode)
	{
		while (newNode->prev && newNode->n < newNode->prev->n)
		{
			newNode->prev->next = newNode->next;
			if (newNode->next)
				newNode->next->prev = newNode->prev;
			newNode->next = newNode->prev;
			newNode->prev = newNode->prev->prev;
			if (newNode->prev)
				newNode->prev->next = newNode;
			newNode->next->prev = newNode;
			if (!newNode->prev)
				*list = newNode;
			print_list(*list);
		}
		newNode = newNode->next;
	}
}
