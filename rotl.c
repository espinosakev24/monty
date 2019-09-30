#include "monty.h"
/**
 * rotl - function that change first by last n memeber of dlklst
 * @h: header pointer to the dblinkedlist
 * Return: void
 */
int rotl(stack_t **h)
{
	stack_t *aux = *h;
	int int_buf = 0;

	if (!*h || !h)
		return (1);

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
	return (0);
}
int rotr(stack_t **h)
{
	stack_t *aux = *h;
	int tail = 0;
	
	if (!*h || !h)
		return (1);

	while (aux)
	{
		if (aux->next == NULL)
		{
			tail = aux->n;
			break;
		}
		aux = aux->next;
	}
	while (aux)
	{
		if (aux->prev == NULL)
		{
			aux->n = tail;
			break;
		}
		aux->n = aux->prev->n;
		aux = aux->prev;
	}
	return (0);
}
