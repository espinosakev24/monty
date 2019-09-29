#include "monty.h"
/**
 * do_pop - function that removes the first node of a dblinkedlist
 * @h: header pointer of the dlinked list
 * @line: counter of the file lines
 * Return: Void
 */
void do_pop(stack_t **h, int line)
{
	stack_t *aux;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}
	aux = *h;
	*h = (*h)->next;
	free(aux);
}
