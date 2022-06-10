#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *actual = *list;
	listint_t *to_change = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
  
	while (actual != NULL)
	{
		to_change = actual;
		while (actual->prev != NULL && actual->n < actual->prev->n)
		{
			to_change->prev->next = to_change->next;
			if (to_change->next != NULL)
			{
				to_change->next->prev = to_change->prev;
			}
			to_change->next = to_change->prev;
			to_change->prev = to_change->prev->prev;
			to_change->next->prev = to_change;
			if (to_change->prev != NULL)
				to_change->prev->next = to_change;
			else
			{
				*list = to_change;
			}
			print_list(*list);
		}
		actual = actual->next;
	}
}
