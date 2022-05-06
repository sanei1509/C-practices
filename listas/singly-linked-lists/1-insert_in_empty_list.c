#include <stdio.h>
#include <stdlib.h>

typedef lista_elementos
{
	int n;
	lista_elementos *next;
}elemento_t;

elemento_t *insert_empty_list(elemento_t **head, int n)
{
	elemento_t *nuevo_elemento;

	nuevo_elemento = malloc(sizeof(elemento_t));
	if (nuevo_elemento == NULL)
		return (NULL);

	nuevo_elemento->n = n;
	if (*head == NULL)
	{
		*head = nuevo_elemento;
		nuevo_elemento->next = NULL;
	}

	return (nuevo_elemento);
}

int main()
{
	elemento_t *lista_creada = NULL;

	lista_creada = insert_empty;
	printf("", lista_cread->);

	return (0);
}
