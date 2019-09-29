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
	else if (strcmp(str, "nop") == 0)
		line++;
	else
	{	fprintf(stderr, "L%d: unknown instruction %s\n", line, str);
		free_dlist(head);
		exit(EXIT_FAILURE); }
	return (0); }
