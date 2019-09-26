#include "monty.h"
/**
* free_pointer - prints a grid of integers
* @pointer: the address of a double pointer
* Return: Nothing.
*/
void free_pointer(char **pointer)
{
	int n = 0;

	for (n = 0; grid[n]; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

