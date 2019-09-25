#include "monty.h"
/**
 * file_chars - function that gets the amount of chars of a file
 * @arv: db pointer to strings of main parameters
 * Return: amount of chars of a file
 */
int file_chars(char **arv)
{
	int fd = open(arv[1], O_RDONLY);
	ssize_t n = 0;
	char *buff = malloc((sizeof(char)) * (1024));

	if (fd == -1)
		return (0);

	if (arv[1] == NULL)
		return (0);

	n = read(fd, buff, 1024);
	if (n == -1)
	{
		return (0);
	}
	close(fd);
	return (n);
}
