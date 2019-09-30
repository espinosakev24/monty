#include "monty.h"
/**
 * printstr - function that prints str from a dlinkedlist
 * @h: head pointer to dlinkedlist
 * Return: Void
 */
void printstr(stack_t **h)
{
	stack_t *aux = *h;

	while (aux)
	{
		if (aux->n == 0 || aux->n > 127)
		{
			exit(0);
		}
		putchar(aux->n);
		aux = aux->next;
	}
	putchar('\n');
}
