#include "monty.h"
global_t global;
/**
 * main - function main of montybytecode interpretr
 * @argc: amount of parameters of the main
 * @argv: db pointer to each parameter of main
 * Return: 0
 */
int main(int argc, char **argv)
{
	int text = 0, status = 1, line = 1;
	char *str;
	size_t size = 0;
	stack_t *head = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	global.fp = fopen(argv[1], "r");
	if (global.fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (status)
	{
		text = getline(&global.buff, &size, global.fp);
		if (text == EOF)
			break;
		str = strtok(global.buff, " \n\t\r");
		if (str == NULL)
		{
			line++;
			continue;
		}
		make_op(&head, str, line);
		line++;
	}
	free(global.buff);
	fclose(global.fp);
	free_list(head);
	exit(EXIT_SUCCESS);
}
