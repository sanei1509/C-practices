/* LISTAS ENLAZADAS */

/* Librerias REQUERIDAS */
#include <stdio.h>
#include <stdlib.h>

/* Creamos una estructura con un sinonimo que podemos usar para crear
nuevos nodos de nuestra lista enlazada */

typedef struct lista_nodo
{
	char *nombre;
	struct lista_nodo *next;
}libro;

/* CREAMOS FUNCIONES */
/* retorno /tipo   name_function   (parametros que va a recibir la funcion con /tipos) */
libro *listaLibro(libro *lista)
{
	lista = NULL;
	return (lista);
}


/* reservar memoria para los valores a guardar 
no debemos tener el tamaños de los elementos sino del tipo de estructura */
libro *agregarLibro(libro *head, char *nombre_libro)
{ 
	libro *auxiliar = head;
	libro *nuevo_libro = NULL;
	nuevo_libro = malloc(sizeof(libro));
	
	if (nuevo_libro == NULL)
		return (NULL);
	/* asignamos el valor pasado a la struct del nuevo libro */
	nuevo_libro->nombre = nombre_libro;
	nuevo_libro->next = NULL;
	/* donde debemos meter el nuevo nodo? */
	/* lista vacia? -> asignamos al primer valor de nuestra lista*/
	if (head == NULL)
	{
		head = nuevo_libro;
	}/*si la lista no es vacía*/
	else
	{
		while(auxiliar->next != NULL)
		{
			auxiliar= auxiliar->next;
		}
		/*auxiliar sale siendo el anterior al lugar donde debemos conectar nuestro nuevo nodo*/
		auxiliar->next = nuevo_libro;
		nuevo_libro->next = NULL;

	}

	return (nuevo_libro);	
}


/* para testear el código de arriba */
int main()
{
	/*variable apuntador tipo libro*/
	libro *lista = NULL;
 	
	lista = listaLibro(lista);

	/*obtendríamos (nil) o 0x0 in mac*/
	/*porque nuestra lista esta vacia*/
	/*printf("%p\n", lista);*/

	/*AGREGAR LIBRO*/
	lista = agregarLibro(lista, "Programación avanzada");
	lista = agregarLibro(lista, "Caperucita Roja");
	printf("nombre de libro en nuestra lista: %s\n", lista->nombre);
	return (0);
}
