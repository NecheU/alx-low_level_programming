#include "lists.h"

/**
 * list_len - A function tht returns the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t content = 0;

	while (h)
	{
		content++;
		h = h->next;
	}
	return (content);
}
