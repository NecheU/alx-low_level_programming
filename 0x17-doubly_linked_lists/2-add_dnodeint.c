#include "lists.h"

/**
 * add_dnodeint - C function that adds a new node
 * at rhe beginning of the a doubly linked list
 * @head: a pointer to the headbof the list
 * @n: intgeger for the new node to contain
 *
 * Return: Address of the new mode or NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
