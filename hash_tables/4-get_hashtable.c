#include "hash_tables.h"

/**
 *hash_table_get - devolver el valor asociada con la clave pasada
 *@ht: hash table
 *@key: la clave que estas buscando
 *Return: value of this element with key passed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i_num = 0;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	i_num = key_index((unsigned char *) key, ht->size);
	element = ht->array[i_num];

	if (element == NULL)
		return (NULL);

	while (strcmp(key, element->key) != 0)
		element = element->next;

	/*cuando encuentre coincidencia con el elemento voy a retornar value*/
	return (element->value);
}