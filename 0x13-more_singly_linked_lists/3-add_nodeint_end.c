#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lnd, *ptemp;

	lnd = malloc(sizeof(listint_t));
	if (lnd == NULL)
		return (NULL);

	lnd->n = n;
	lnd->next = NULL;
	if (*head == NULL)
		*head = lnd;

	else
	{
		ptemp = *head;
		while (ptemp->next != NULL)
			ptempt = ptempt->next;

		ptemp->next = lnd;
	}
	return (lnd);
}
