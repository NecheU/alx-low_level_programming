#include "lists.h"
/**
 * sum_listint - A function that returns the sum
 * of all the data in a linkes list
 * @head: head of the list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	listint_t *d = head;
	size_t total = 0;

	while (d != NULL)
	{
		total += d->n;
		d = d->next;
	}
	return (total);
}
