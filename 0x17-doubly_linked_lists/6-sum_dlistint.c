#include "lists.h"

/**
 * sum_dlistint - C function that returns the sum of all the
 * data in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *present_n = head;

	while (present_n != NULL)
	{
		sum += present_n->n;
		present_n = present_n->next;
	}

	return (sum);
}
