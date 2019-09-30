#include "monty.h"
/**
 * rotl - function that change first by last n memeber of dlklst
 * @h: header pointer to the dblinkedlist
 * Return: void
 */
void rotl(stack_t **h)
{
	stack_t *aux = *h;
	int int_buf = 0;

	int_buf = aux->n;

	while (aux)
	{
		if (aux->next == NULL)
		{
			aux->n = int_buf;
			break;
		}
		aux->n = aux->next->n;
		aux = aux->next;
	}
}
