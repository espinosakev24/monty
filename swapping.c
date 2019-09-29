#include "monty.h"
/**
 * swapping - function that swap n members of two header nodes
 * @h: double pointer to the dlinked list
 * @line: var counter of the lines of the file
 * Return: void.
 */
void swapping(stack_t **h, int line)
{
	stack_t *aux = *h;
	int num1 = 0;
	int num2 = 0;
	int list_len = 0;

	list_len = dlistint_len(h);
	if (list_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}

	num1 = aux->n;
	num2 = aux->next->n;
	aux->n = num2;
	aux->next->n = num1;
}
/**
 * add - function that swap n members of two header nodes
 * @h: double pointer to the dlinked list
 * @line: var counter of the lines of the file
 * Return: void.
 */
void add(stack_t **h, int line)
{
	stack_t *aux;
	int result = 0;
	int list_len = 0;

	list_len = dlistint_len(h);
	if (list_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}
	result += (*h)->n;
	result += (*h)->next->n;
	aux = *h;
	*h = (*h)->next;
	(*h)->n = result;
	free(aux);
}
/**
 * dlistint_len - functiont that returns amount of nodes in a dlinkedlist
 * @h: header node that points to the list
 * Return: amount of nodes
 */
int dlistint_len(stack_t **h)
{
	stack_t *aux = *h;
	int nodes = 0;

	while (aux)
	{
		nodes++;
		aux = aux->next;
	}
	return (nodes);
}
