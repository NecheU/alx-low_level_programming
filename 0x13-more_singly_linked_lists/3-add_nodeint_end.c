#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of
 * a linstint list
 * @head: pointer to the first elwment of the list
 * @n: int to be set ij the new node
 *
 * Return: NULL if failure or address to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added, *end = *head;

	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);
	added->n = n;
	added->next = NULL;

	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = added;
	}
	else
		*head = added;

	return (added);
}
