#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint list
 * @head: pointer to the first element if the list
 * @n: int to be set in the new node
 *
 * Return: address to the new element or NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = *head;
	*head = added;

	return (added);
}
