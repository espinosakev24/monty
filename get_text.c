#include "monty.h"
/**
 * get_text - function that gets the text of a file
 * @argc: amount of main parameters
 * @arv: db pointer to each string of main parameter
 * Return: Db pointer to array with a file content
 */
char **get_text(int argc, char **arv)
{
	FILE *fp;
	int text;
	char **buffer = malloc(sizeof(char) * 10000);
	int fd, a = 0, idx = 0;
	int status = 1, value = 0;
	size_t size = 32;
	char **content = malloc(sizeof(char) * file_chars(arv));

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);

	}
	if (*buffer == NULL || *content == NULL)
		return (NULL);
	while (value < count_line(arv))
	{
		content[value] = malloc(sizeof(char) * 100);
		value++;
	}
	content[value] = 0;
	fp = fopen(arv[1], "r");
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
		strcpy(content[idx], *buffer);
		idx++;
	}
	free(buffer);
	fclose(fp);
	return (content);

}
