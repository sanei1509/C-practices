#include "sort.h"
/**
 * @list: recibimos algo
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *p = NULL, *curr = NULL, *aux = NULL;

	/*zero or one element in list ?*/
    if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	/*no puedo pararme en el primero porque tengo
	que evaluar el anterior nodo*/	
	curr = (*list)->next;
	while (curr != NULL)
	{
		p = curr;
		curr = curr->next; /*hasta el final de la lista*/
		if (p->n < p->prev->n)
		{
			aux = p->prev;
			while (aux != NULL && aux->n > p->n)
			{
				aux->next = p->next;
				if (p->next !=  NULL)
					p->next->prev = p->prev;
				if (aux->prev == NULL) /*este es el nodo mas pequeño*/
				{
					p->prev = NULL;
					p->next = aux;
					p->next->prev = p;
					*list = p;
					print_list(*list);
				}
				else
				{	
					p->prev = aux->prev;
					aux->prev->next = p;
					aux->prev = p;
					p->next = aux;
					print_list(*list);
				}
				aux = aux->prev->prev;
			}
		}
	}

}