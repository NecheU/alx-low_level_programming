#include "lists.h"

/**
 * free_list - a fuction thst frees a list
 *
 * @head: pointer to the ludt head
 *
 */

void free_list(list_t *head)
{
	list_t *main_node;
	list_t *next_node;

	if (head)
	{
		main_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(main_node->str);
			free(main_node);
			main_node = next_node;
			main_node = next_node->next;
		}
		free(main_node->str);
		free(main_node);
	}
}
