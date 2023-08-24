#include "lists.h"
/**
 * add_node_end - A function that adds new node af the
 * end of a list
 * @head: pointer to the head of the list
 * @str: str to be added to the list
 *
 * Return: address of the elements or NULL if failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *added, *end;

	added = malloc(sizeof(list_t));

	if (added == NULL)
	{
		free(added);
		return (NULL);
	}
			if (str == NULL)
			{
				free(added);
				return (NULL);
			}
			dup = strdup(str);

			for (len = 0; str[len];)
				len++;

			added->str = dup;
			added->len = len;
			added->next = NULL;

			if (*head == NULL)
				*head = added;
			else
			{
				end = *head;
				while (end->next != NULL)
					end = end->next;
				end->next = added;
			}
			return (*head);
}
