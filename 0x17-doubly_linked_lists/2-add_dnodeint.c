#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to head node
 * @n: value to store in new node
 *
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	free(new);
	return (new);
}
