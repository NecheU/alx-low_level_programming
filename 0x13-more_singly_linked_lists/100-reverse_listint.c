#include "lists.h"

/**
 * reverse_listint - It reverses listint_t list
 * @head: pointer to the list
 *
 * Return: pointer to the first jode of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (!head)
		return (NULL);

	a = NULL;
	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
