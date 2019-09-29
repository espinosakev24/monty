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
 * @line: amount of lines of the file
 * Return: void
 */
void print_head(stack_t **h, int line)
{
	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
