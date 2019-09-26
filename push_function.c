#include "monty.h"
/**
 * push_function - function that get the int of push command
 * @value: string with a \n char that will be converted into a int
 * @line: int that counts the lines of the file
 * Return: value that is an integer
 */
int push_function(char *value, int line)
{
	int i = 0;

	if (value == NULL)
		return (0);
	value = strtok(NULL, " ");
	no_breakline(value);
	while (value[i] != '\0')
	{
		if (value[0] == '-')
		{
			i++;
			continue;
		}
		if (_isdigit(value[i] == 0))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (atoi(value));
}
