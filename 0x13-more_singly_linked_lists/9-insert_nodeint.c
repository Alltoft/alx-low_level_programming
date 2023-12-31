#include "lists.h"

/**
 * *insert_nodeint_at_index - count number of elements
 * @head: the way of the sword
 * @idx: git push
 * @n: the cannons
 * Return: number of soliders
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd = malloc(sizeof(listint_t));
	listint_t *t = *head;
	unsigned int i;

	if (!head || !nd)
		return (NULL);

	nd->n = n;

	if (!idx)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}

	for (i = 0; t != NULL && i < idx - 1; i++)
		t = t->next;
	if (t == NULL)
		return (NULL);
	nd->next = t->next;
	t->next = nd;
	return (nd);
}
