#include "lists.h"
/**
 * free_listint2 - A function that frees listint2 list
 * @head: A pointer to the address to the head of the listint_t list
 *
 * Description: Set the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;

}
