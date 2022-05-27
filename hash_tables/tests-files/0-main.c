#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    /*valor memoria del hash table*/
    printf("%p\n", (void *)ht);
    /*comprobamos que se haya creado del tamaño esperado*/
    printf("%lu\n", ht->size);
    
    return (EXIT_SUCCESS);
}