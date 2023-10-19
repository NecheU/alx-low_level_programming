#include "lists.h"

/**
 * free_list - Frees a list_t lists
 * @head: pointer to the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *main_node;
	list_t *added_node;

	if (head)
	{
		main_node = head;
		added_node = head->next;
		while (added_node)
		{
			free(main_node->str);
			free(main_node);
			main_node = added_node;
			added_node = added_node->next;
		}

		free(main_node->str);
		free(main_node);
	}
}
