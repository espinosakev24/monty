#include "monty.h"

int main(int argc, char **arv)
{
	FILE *fp = fopen(arv[1], "r");
	int text;
	char *buffer[1024];
	int fd;
	int status = 1;
	size_t size = 32;


	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", arv[1]);
		exit(EXIT_FAILURE);
	}
	while (status)
	{
		text = getline(buffer, &size, fp);
		if (text == EOF)
			free(buffer);
			exit(1);
		printf("%s\n", *buffer);
	}
	fclose(fp);
	return (0);

}
