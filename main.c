#include "monty.h"
int main(int argc, char **arv)
{
	FILE *fp = fopen(arv[1], "r");
	int text;
	char **buffer = malloc(sizeof(char) * 10000);
	int fd, a = 0, idx = 0;
	int status = 1, value = 0;
	size_t size = 32;
	char **content = malloc(sizeof(char) * 10000);

	while (value <= 15)
	{
		content[value] = malloc(sizeof(char) * 100);
		value++;
	}
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
			break;
		cpstr(content[idx], *buffer);
		idx++;
	}
	while (content[a] != NULL)
	{
		printf("%s\n", content[a]);
		a++;
	}
	fclose(fp);
	return (0);

}
