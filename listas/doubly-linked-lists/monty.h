#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/* operations */
void push(stack_t **head, unsigned int line_number);
void pall(stack_t **head, unsigned int line_number __attribute__((unused)));
void pint(stack_t **head, unsigned int line_number __attribute__((unused)));
void pop(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

/* math */
void add(stack_t **head, unsigned int line_number);
void mul(stack_t **head, unsigned int line_number);
void sub(stack_t **head, unsigned int line_number);
void _div(stack_t **head, unsigned int line_number);
void mod(stack_t **head, unsigned int line_number);

/* tools */
void free_dlistint(stack_t *head);

#endif