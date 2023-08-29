#include "lists.h"

/**
 * listint_len - count number of elements
 * @h: the way of sword
 * Return: number of soliders
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
