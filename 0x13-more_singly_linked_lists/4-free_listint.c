#include "lists.h"
/**
 * free_listint - A function that frees a linked list
 * @head: head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = NULL;
		head = head->next;
		free(node);
	}
}
