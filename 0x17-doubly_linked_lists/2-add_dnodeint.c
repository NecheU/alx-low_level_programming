#include "lists.h"

/**
 * add_dnodeint - Function to add node at the begining of dlitsint_t list
 * @head: pointer to the head of the list
 * @n: new node/int to be added
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;


	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_n;
	}
	*head = new_n;

	return (new_n);
}
