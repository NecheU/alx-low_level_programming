#include "lists.h"
/**
 * listint_len - A fuction returns the number
 * of elements in a linked listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
