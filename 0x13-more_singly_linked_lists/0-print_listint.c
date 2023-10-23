#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t print = 0;

	while (node)
	{
		printf("%d\n", node->n);
		print++;
		node = node->next;
	}

	return (print);
}
