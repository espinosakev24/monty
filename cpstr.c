#include "monty.h"
/**
 * *cpstr - functiont that copies str in src in dest.
 * @src: pointer to the source string
 * @dest: Pointer that will take the source value
 * Return: Always dest.
 */
char *cpstr(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
