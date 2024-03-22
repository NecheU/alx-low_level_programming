#include "lists.h"

/**
 * free_dlistint - C funtion to free dlistint_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *present_n;

	while (head != NULL)
	{
		present_n = head;
		head = head->next;
		free(present_n);
	}
}
