#include "monty.h"
/**
* free_dlistint - function that frees a db linked list
* @head: double pointer to ddlklist
* Return: void
*/
void free_list(stack_t *head)
{
	stack_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
