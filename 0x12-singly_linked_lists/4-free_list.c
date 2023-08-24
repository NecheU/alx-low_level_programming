#include "lists.h"

/**
 * free_list - a fuction thst frees a list
 *
 * @head: pointer to the ludt head
 *
 */

void free_list(list_t *head)
{
	list_t tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
