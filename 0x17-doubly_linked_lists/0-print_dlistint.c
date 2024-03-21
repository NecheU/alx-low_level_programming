#include "lists.h"
/**
 * print_dlistint - C funtction to print all the element if dlistint_t list
 * @h: head of the dlistint_t list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
	}

	return (nodes);
}
