#include "hash_tables.h"
/**
*hash_table_create - crear un hash table
*@size: Tamaño del array
* Return: pointer new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hash = NULL;

	/*si el tamaño del array es inexistente*/
	if (size == 0)
			return (NULL);

	/*allocamos espacio para la (hash table) primero*/
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	/*Luego allocamos memoria (array) de nodos*/
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
		return (NULL);

	/*seteo todos los valores del array a NULL*/
	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;

	/*asigno el size a al nueva hash table*/
	new_hash->size = size;

	/*devuelve la nueva table cargada*/
	return (new_hash);
}