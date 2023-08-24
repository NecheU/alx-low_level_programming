#include "lists.h"

/**
 * print_list - A function that prints all the contents of a list
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *check = h;
	size_t count = 0;

	while (check != NULL)
	{
		if (check->str != NULL)
			printf("[%d] %s\n", check->len, check->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		check = check->next;
	}

	return (count);
}
