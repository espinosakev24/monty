#include "monty.h"
/**
 * count_line - function that count the lines from a file
 * @argv: argument value
 * Return: int
*/
int count_line(char **argv)
{
	int count, status = 1, text;
	size_t size = 32;
	char **buffer = malloc(sizeof(char) * 1024);
	FILE *fp;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		return (0);
	}
	while (status)
	{
		text = getline(buffer, &size, fp);
		count++;
		if (text == EOF)
			return (count);
	}
	fclose(fp);
	return (count);
}
