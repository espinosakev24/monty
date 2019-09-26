#include "monty.h"
/**
 * check_command - create a structure using the content  of an array
 * @content:  double pointer
 * Return: the head of the structure
*/
stack_t *check_command(char **content)
{
	int line = 1, idx = 0, num = 0;
	char *val;
	stack_t *head = NULL;

	while (content[idx] != NULL && strcmp(content[idx], "") != 0)
	{
		val = strtok(content[idx], " \n");
		if (val == NULL)
		{
			idx++;
			line++;
			continue;
		}
		if (strcmp(val, "pall") == 0)
		{
			print_dlistint(head);
			free_list(head);
		}
		else if (strcmp(val, "push") != 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line, val);
			exit(EXIT_FAILURE);
		}
		else if (strcmp(val, "push") == 0)
		{
			num = push_function(line);
			add_dnodeint(&head, num);
		}
		idx++;
		line++;
	}
	return (head);
}
