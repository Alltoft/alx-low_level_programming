#include "lists.h"

/**
 * free_listint - frees a listint
 * @head: the head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
