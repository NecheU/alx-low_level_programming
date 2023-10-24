#include "lists.h"

/**
 * free_listint2 - it frees a listint_t list
 * the function sets the head to NULL
 * @head: pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *main_node;
	listint_t *next_node;

	if (!head)
		return;

	main_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(main_node);
		main_node = next_node;
		next_node = next_node->next;
	}
	free(main_node);
	*head = NULL;
}
