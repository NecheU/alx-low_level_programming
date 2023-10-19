#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - It adds a new node at the
 * beginning of a list_t lists
 * @head: pointer to the first elem of list_t lists
 * @str: str to set in the new node
 *
 * Return: NULL if failure or address to the new element
 */
 list_t *add_node(list_t **head, const char *str)
{
	list_t added;

	added = malloc(sizeof(list_t));
	if (added == NULL)
	{
		return (NULL);
	}

	added->str = strdup(str);
	if (!added->str)
	{
		free(added);
		return (NULL);
	}

	added->len = _strlen_recursion(added->str);
	added->next = *head;
	*head = added;

	return (added);
}

/**
 * _strlen_recursion - reurns the length of a string
 * @s: the string
 *
 * Return: lengrh of s
 */
int _str_len_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _str_len_recursion(s + 1));
}
