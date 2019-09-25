#include "monty.h"

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
		if (text == EOF)
			status = 0;
		count++;
	}
	fclose(fp);
	return (count);
}

int main (int argc, char **argv)
{
	(void) argc;
	int count;

	count = count_line(argv);
	printf("conteo %d\n", count);

	return (0);
}