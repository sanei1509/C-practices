#include "hash_tables.h"

/**
 *hash_table_print - print a hash table [key, value]
 *@ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *element = NULL;
	unsigned long int i = 0;
	int cont = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		element = ht->array[i];
		while (element != NULL)
		{
			/*sino es el primero printeo coma*/
			if (cont > 0)
				printf(", ");
			printf("'%s': '%s'", element->key, element->value);

			element = element->next;
			cont++;
		}
		i++;
	}
	printf("}\n");
}