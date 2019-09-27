#include "monty.h"
/**
 * main - function main of montybytecode interpretr
 * @argc: amount of parameters of the main
 * @argv: db pointer to each parameter of main
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fp = NULL;
	int text = 0, status = 1, line = 1;
	char *str;
	size_t size = 0;
	char *buff = NULL;
	stack_t *head = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (status)
	{
		text = getline(&buff, &size, fp);
		if (text == EOF)
			break;
		str = strtok(buff, " \n\t\r");
		make_op(&head, str, line);
		line++;
	}
	free(buff);
	free_list(head);
	fclose(fp);
	return (0);
}
