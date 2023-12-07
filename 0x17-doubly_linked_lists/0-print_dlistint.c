#include "lists.h"

/**
 * print_dlistint - Fuctipn to print all the element of dlistint_t list
 * @h: Head of the dlistint list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\b", h->n);
		h = h->next;
	}

	return (nodes);
}
