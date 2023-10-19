#include "lists.h"

/**
 * list_len - It returns the number of elements in lists_t
 * @h: pointer to the lists_t
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
