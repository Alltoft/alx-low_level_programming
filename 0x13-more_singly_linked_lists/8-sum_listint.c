#include "lists.h"

/**
 * sum_listint - count number of elements
 * @head: the way of sword
 * Return: number of soliders
 */

int sum_listint(listint_t *head)
{
	int count = 0;

	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
