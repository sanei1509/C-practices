#include "hash_tables.h"
/**
 *hash_table_create - crear un hash table
 *@size: Tamaño del array
 * Return: pointer new hash table
 */
 hash_table_t *hash_table_create(unsigned long int size)
 {
     unsigned long int i;
     hash_table_t *new_hash = NULL;

     if (size == 0)
        return (NULL);
     
     new_hash = malloc(sizeof(hash_table_t));
     if (new_hash == NULL)
        return (NULL);
        
     if ()
 }