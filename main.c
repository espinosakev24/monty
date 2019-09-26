#include "monty.h"
/**
 * main - function main of montybytecode interpretr
 * @argc: amount of parameters of the main
 * @argv: db pointer to each parameter of main
 * Return: 0
 */
int main(int argc, char **argv)
{
	char **test = get_text(argc, argv);

	check_command(test);

	return (0);
}
