#include "lists.h"
/**
 * free_dlistint - frees lists
 * @head: is the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
