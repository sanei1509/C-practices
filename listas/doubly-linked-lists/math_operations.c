#include "monty.h"

/**
 *add - add the last two elements 
 *@head: pointer to the first element
 *@line_number: line number of byte codes
 */
void add(stack_t **head, unsigned int line_number)
{
	stack_t *c_node = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		fclose(gl.fp);
		if (*head)
			free_dlistint(*head);
		free(gl.line_read);
		exit(EXIT_FAILURE);
	}

	/*guarde referencia asi que puedo mover mi puntero head*/
	*head = (*head)->next;
	/*necesito sumar valores de ambos elementos*/
	(*head)->n = (*head)->n + c_node->n;
	(*head)->prev = NULL;
	free(c_node);
}

/**
 * mul - multiplies the last two elements 
 * @head: pointer to the first element
 * @line_number: line number of byte codes
 */
void mul(stack_t **head, unsigned int line_number)
{
	stack_t *c_node = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		fclose(gl.fp);
		if (*head)
			free_dlistint(*head);
		free(gl.line_read);
		exit(EXIT_FAILURE);
	}

	/*guarde referencia asi que puedo mover mi puntero head*/
	*head = (*head)->next;
	/*necesito sumar valores de ambos elementos*/
	(*head)->n = (*head)->n * c_node->n;
	(*head)->prev = NULL;
	free(c_node);
}

void sub(stack_t **head, unsigned int line_number)
{
        stack_t *c_node = *head;

        if (*head == NULL || (*head)->next == NULL)
        {
                fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		fclose(gl.fp);
		free(gl.line_read);
                exit(EXIT_FAILURE);
        }

        /*guarde referencia asi que puedo mover mi puntero head*/
        *head = (*head)->next;
        /*necesito restar valores de ambos elementos*/
        (*head)->n = (*head)->n - c_node->n;
        (*head)->prev = NULL;
	free(c_node);
}

/**
 * _div - div the last two element of the stack
 * @head: pointer
 * @line_number: line number
 */

void _div(stack_t **head, unsigned int line_number)
{
	stack_t *c_node = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		fclose(gl.fp);
		if (*head)
			free_dlistint(*head);
		free(gl.line_read);
		exit(EXIT_FAILURE);
	}
	
	if (c_node->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		fclose(gl.fp);
		free_dlistint(*head);
		free(gl.line_read);
		exit(EXIT_FAILURE);
	}

	*head = (*head)->next;
	(*head)->n = (*head)->n / c_node->n;
	(*head)->prev = NULL;
	free(c_node);
}

/**
 * mod - div the last two element of the stack
 * @head: pointer
 * @line_number: line number
 */

void mod(stack_t **head, unsigned int line_number)
{
	stack_t *c_node = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		fclose(gl.fp);
		if (*head)
			free_dlistint(*head);
		free(gl.line_read);
		exit(EXIT_FAILURE);
	}
	
	if (c_node->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		fclose(gl.fp);
		free_dlistint(*head);
		free(gl.line_read);
		exit(EXIT_FAILURE);
	}

	*head = (*head)->next;
	(*head)->n = (*head)->n % c_node->n;
	(*head)->prev = NULL;
	free(c_node);
}
