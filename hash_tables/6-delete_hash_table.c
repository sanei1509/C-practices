#include "hash_tables.h"
/**
 *hash_table_delete - main
 *@ht: hash_table
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *actual = NULL;
	hash_node_t *actualdel = NULL;
	unsigned long int iter = 0;

	while (iter < ht->size)
	{
		actual = ht->array[iter];
		while (actual != NULL)
		{
			actualdel = actual;
			actual = actual->next;
			free(actualdel->key);
			free(actualdel->value);
			free(actualdel);
		}
		iter++;
	}
	free(ht->array);
	free(ht);
}