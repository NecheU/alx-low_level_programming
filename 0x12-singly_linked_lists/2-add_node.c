#include "lists.h"

/**
 * add_node - adds new node af the negininning of a list
 * @head: pointer to the head of the list
 * @str: string to be adeed
 *
 * Return: Address tothe newly added element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *added;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(added);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	added->str = dup;
	added->len = len;
	added->next = *head;

	*head = added;

	return (added);
}
