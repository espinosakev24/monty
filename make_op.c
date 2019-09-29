#include "monty.h"
/**
 * make_op - function that probes commands and executes a function
 * @str: string containing the command
 * @line: counter var of lines from the file opened
 * @head: db pointer to the dlinked list
 * Return: 0
 */
int *make_op(stack_t **head, char *str, int line)
{
	if (strcmp(str, "push") == 0)
		do_push(head, line);
	else if (strcmp(str, "pall") == 0)
		print_dlistint(head);
	else if (strcmp(str, "pint") == 0)
		print_head(head, line);
	else if (strcmp(str, "pop") == 0)
		do_pop(head, line);
	else if (strcmp(str, "swap") == 0)
		swapping(head, line);
	else if (strcmp(str, "nop") == 0)
		line++;
	else
	{	fprintf(stderr, "L%d: unknown instruction %s\n", line, str);
		free_dlist(head);
		exit(EXIT_FAILURE); }
	return (0); }
#include "monty.h"
/**
 * swapping - function that swap n members of two header nodes
 * @h: double pointer to the dlinked list
 * @line: var counter of the lines of the file
 * Return: void.
 */
void swapping(stack_t **h, int line)
{
	(void) line;
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
