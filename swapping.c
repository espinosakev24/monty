#include "monty.h"
/**
 * swapping - function that swap n members of two header nodes
 * @h: double pointer to the dlinked list
 * @line: var counter of the lines of the file
 * Return: void.
 */
void swapping(stack_t **h, int line)
{
	stack_t *aux = *h;
	int num1 = 0;
	int num2 = 0;
	int list_len = 0;

	list_len = dlistint_len(h);
	if (list_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}

	num1 = aux->n;
	num2 = aux->next->n;
	aux->n = num2;
	aux->next->n = num1;
}
/**
 * simple_math - take two numbers from the top of a stack a make some maths
 * @h: double pointer to the dlinked list
 * @line: var counter of the lines of the file
 * @str: char pointer
 * @signal: int
 * Return: void.
 */
void simple_math(stack_t **h, int line, int signal, char *str)
{
	stack_t *aux;
	int result = 0, n1 = 0, n2 = 0;
	int list_len = 0;

	list_len = dlistint_len(h);
	if (list_len < 2)
	{
		fprintf(stderr, "L%d: can't %s, stack too short\n", line, str);
		fclose(global.fp);
		exit(EXIT_FAILURE);
	}
	n1 = (*h)->n;
	n2 = (*h)->next->n;
	result = math_operations(n1, n2, signal, line);
	aux = *h;
	*h = (*h)->next;
	(*h)->n = result;
	free(aux);
}
/**
 * math_operations - add, substract, multiply and divide two numbers
 * @n1: int
 * @n2: int
 * @signal: to select the case
 * @line: int
 * Return: int.
 */
int math_operations(int n1, int n2, int signal, int line)
{
	int result;

	switch (signal)
	{
	case 1:
		/* add */
		result = n1 + n2;
		break;
	case 2:
		/* sub */
		result = n2 - n1;
		break;
	case 3:
		/* mul */
		result = n1 * n2;
		break;
	case 4:
		/* div */
		if (n1 == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line);
			fclose(global.fp);
			exit(EXIT_FAILURE);
		}
		result = n2 / n1;
		break;
	case 5:
		/* mod */
		if (n1 == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line);
			fclose(global.fp);
			exit(EXIT_FAILURE);
		}
		result = n2 % n1;
		break;
	default:
		break;
	}
	return (result);
}
/**
 * dlistint_len - functiont that returns amount of nodes in a dlinkedlist
 * @h: header node that points to the list
 * Return: amount of nodes
 */
int dlistint_len(stack_t **h)
{
	stack_t *aux = *h;
	int nodes = 0;

	while (aux)
	{
		nodes++;
		aux = aux->next;
	}
	return (nodes);
}
