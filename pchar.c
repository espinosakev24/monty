#include "monty.h"
/**
 * do_pchar - function that prints a ascii value from top of a linkedlsit
 * @h: header pointer to the dlinked list
 * @line: counter of the lines of the file
 * Return: void
 */
void do_pchar(stack_t **h, int line)
{
	if ((*h)->n > 127 || (*h)->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}
	putchar((*h)->n);
	putchar('\n');
}
