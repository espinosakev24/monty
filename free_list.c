#include "monty.h"
/**
* free_list - function that frees a db linked list
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

/**
* free_dlist - function that frees a db linked list
* @head: double pointer to ddlklist
* Return: void
*/
void free_dlist(stack_t **head)
{
	stack_t *aux;

	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
	if (global.buff)
		free(global.buff);
	if (global.fp)
		fclose(global.fp);
}
