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
	else if (strcmp(str, "add") == 0)
		simple_math(head, line, 1, "add");
	else if (strcmp(str, "sub") == 0)
		simple_math(head, line, 2, "sub");
	else if (strcmp(str, "mul") == 0)
		simple_math(head, line, 3, "mul");
	else if (strcmp(str, "div") == 0)
		simple_math(head, line, 4, "div");
	else if (strcmp(str, "mod") == 0)
		simple_math(head, line, 5, "mod");
	else if (strcmp(str, "nop") == 0)
		line++;
	else if (str[0] == '#')
		line++;
	else if (strcmp(str, "pchar") == 0)
		do_pchar(head, line);
	else if (strcmp(str, "pstr") == 0)
		printstr(head);
	else if (strcmp(str, "rotl") == 0)
	{
		if (rotl(head) == 1)
			line++;	}
	else if (strcmp(str, "rotr") == 0)
	{
		if (rotr(head) == 1)
			line++;	}
	else
	{	fprintf(stderr, "L%d: unknown instruction %s\n", line, str);
		free_dlist(head);
		exit(EXIT_FAILURE); }
	return (0); }
