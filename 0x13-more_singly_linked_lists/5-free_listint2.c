#include "lists.h"

/**
 * free_listint2 - it frees a lists
 * @head: the head of finction
 */

void free_listint2(listint_t **head)
{
	listint_t *ptemp;

	if (!head)
		return;

	while (*head)
	{
		ptemp = *head;
		*head = (*head)->next;
		free(ptemp);
	}
}
