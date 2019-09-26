#include "monty.h"
/**
* free_dlistint - function that frees a db linked list
* @head: double pointer to ddlklist
* Return: void
*/
void free_dlistint(stack_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
