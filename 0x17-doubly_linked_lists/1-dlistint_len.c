#include "lists.h"

/**
 * dlistint_len - It returns the number of elements in dlistint_t list
 * @h: head of the list
 *
 * Return: number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (nodes);
}
