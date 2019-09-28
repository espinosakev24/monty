#include "monty.h"
/**
 * print_dlistint - function that prints nodes data in a dlinkedlist
 * @h: header pointer to the dlinked list
 * Return: amount of nodes
 */
size_t print_dlistint(stack_t **h)
{
	int nodes = 0;
	stack_t *aux = *h;

	while (aux)
	{
		printf("%d\n", aux->n);
		nodes++;
		aux = aux->next;
	}
	return (nodes);
}
/**
 * print_head - print the first element in a double linked list
 * @h: header pointer to the dlinked list
 * Return: void
 */
void print_head(stack_t **h)
{
	stack_t *aux = *h;

	printf("%d\n", aux->n);
}

