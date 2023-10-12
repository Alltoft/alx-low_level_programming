#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	while (temp != NULL)
	{
		if (i  == idx)
		{
			new->n = n;
			(temp)->prev = new;
			new->prev = (temp);
			new->next = (temp)->next;
			(temp)->next = NULL;
			return (new);
		}
		(temp) = (temp)->next;
		i++;
	}
	return (NULL);
}
