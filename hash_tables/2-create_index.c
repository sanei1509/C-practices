#include "hash_tables.h"

/**
 *key_index - función que te da el índice de una clave
 *@key: is the key of the element
 *@size: is the size of the array of the hash table
 *Return: el indice del elemento cone esa key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}