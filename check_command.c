#include "monty.h"
/**
 * check_command - create a structure using the content  of an array
 * @content:  double pointer
 * Return: the head of the structure
*/
stack_t *check_command(char **content)
{
	int line = 0, i = 0, idx = 0, num = 0;
	char *val;
	stack_t *head = NULL;

	while (content[idx] != NULL && strcmp(content[idx], "") != 0)
	{
		val = strtok(content[idx], " ");
		if (strcmp(val, "push") == 0)
		{
			val = strtok(NULL, " ");
			no_breakline(val);
			while (val[i] != '\0')
			{
				if (_isdigit(val[i]) == 0)
				{
					printf("line %d: invalid input\n", line);
					exit(1);
				}
				i++;
			}
			puts(val);
			num = atoi(val);
			add_dnodeint(head, num);
		}
		idx++;
		line++;
	}
	return (head);
}
