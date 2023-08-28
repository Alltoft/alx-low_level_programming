#include "lists.h"

/**
 * free_listint2 - it frees a lists
 * @head: the head of finction
 */

void free_listint2(listint_t **head)
{
	listint_t *pptr;
	listint_t *sptr;

	pptr = *head;
	while (pptr)
	{
		sptr = pptr->next;
		free(pptr);
		pptr = sptr;
	}
	free(pptr);
}
