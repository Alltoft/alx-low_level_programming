#include "lists.h"
/**
 * sum_dlistint - returns the nth node of a dlistint_t linked list.
 * @head: pointer to first node in linked list
 *
 * Return: nth node or if node doesn't exist, NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
