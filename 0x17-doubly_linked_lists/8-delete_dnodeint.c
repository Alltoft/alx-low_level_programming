#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: double pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;

	if (current == NULL || index < 0)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	if (current->next != NULL)
		current->next->prev = previous;
	free(current);

	return (1);
}
