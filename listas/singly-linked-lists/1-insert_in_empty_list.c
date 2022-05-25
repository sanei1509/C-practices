#include <stdio.h>
#include <stdlib.h>

typedef struct lista_elementos
{
	int n;
	struct lista_elementos *next;
} elemento_t;

elemento_t *insert_empty_list(elemento_t *head, int n)
{
	elemento_t *nuevo_elemento;

	nuevo_elemento = malloc(sizeof(elemento_t));
	if (nuevo_elemento == NULL)
		return (NULL);

	nuevo_elemento->n = n;
	if (head == NULL)
	{
		head = nuevo_elemento;
		nuevo_elemento->next = NULL;
	}

	return (nuevo_elemento);
}

int main()
{
	elemento_t *lista_vacia = NULL;

	lista_vacia = insert_empty_list(lista_vacia, 2);
	
    lista_vacia = insert_empty_list(lista_vacia, 4);
	printf("%d\n", lista_vacia->n);

	return (0);
}
