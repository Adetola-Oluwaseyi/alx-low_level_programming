#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list and sets head to NULL
 * @head: pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
