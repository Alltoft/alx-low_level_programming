#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
