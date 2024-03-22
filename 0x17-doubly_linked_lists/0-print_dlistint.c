#include "lists.h"
/**
 * print_dlistint - C funtction to print all the element if dlistint_t list
 * @h: head of the dlistint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
