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
	int num1 = 0, num2 = 0;

	if (!aux->next)
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
