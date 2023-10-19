#include "lists.h"

/**
 * print_list - It prints the list of elwments of lists_t
 * @h: pointer to the lists
 *
 * Return: numb of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		num_of_nodes++;
		h = h->next;
	}
	
	return (num_of_nodes);
}
