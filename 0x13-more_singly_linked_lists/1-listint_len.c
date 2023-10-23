#include "lists.h"

/**
 * listint_len - Returns the number if elements in a listint list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t num = 0;

	while (node)
	{
		num++;
		node = node->next;
	}

	return (num);
}
