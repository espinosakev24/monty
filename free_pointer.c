#include "monty.h"
/**
* free_pointer - prints a pointer of integers
* @pointer: the address of a double pointer
* Return: Nothing.
*/
void free_pointer(char **pointer)
{
	int n = 0;

	for (n = 0; pointer[n]; n++)
	{
		free(pointer[n]);
	}
	free(pointer);
}

