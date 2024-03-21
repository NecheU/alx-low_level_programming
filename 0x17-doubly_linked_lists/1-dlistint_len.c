#include "lists.h"

/**
 * dlistint_len - C funtction to returns the number of element in
 * a linked list
 * @h: head to the link list
 *
 * Return: Always success
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}

	return (node_counter;)
}
