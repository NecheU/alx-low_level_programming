#include "lists.h"

/**
 * free_listint - It frees a oistint_t list
 * @head: pointer tk the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *main_node;
	listint_t *next_node;

	if (head)
	{
		main_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(main_node);
			main_node = next_node;
			next_node = next_node->next;
		}
		free(main_node);
	}
}
