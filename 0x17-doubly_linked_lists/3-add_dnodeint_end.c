#include "lists.h"

/**
 * add_dnodeint_end - C function that adds a new node at
 * the end of dlistint_t list
 * @h: pointer to the head of the list
 * @n: new node to be added
 *
 * Return: last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_n, a;

	last_n = malloc(sizeof(dlistint_t));
	if (last_n == NULL)
	{
		return (NULL);
	}

	last_n->n = n;
	last_n->next = NULL;

	if (*head == NULL)
	{
		last_n->prev = NULL;
		*head = last_n;
		return (last_n);
	}

	a = *head;
	while (a->next != NULL)
	{
		a = a->next;
	}

	a->next = last_n;
	last_n->prev = a;

	return (last_n);
}
