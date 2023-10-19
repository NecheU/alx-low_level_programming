#include "lists.h"

int _strlen_recursion(char *s);

/**
* add_node_end - Adds a new node at the end of a list_t lists
* @head: pointer to the first elements of list_t lists
* @str: string to be added
*
* Return: NULL if failure or address to the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *added, *d = *head;

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
added->next = NULL;

if (d)
{
while (d->next)
d = d->next;
d->next = added;
}
else
*head = added;
return (added);
}

/**
* _strlen_recursion - Returns the length of a str
* @s: the str
*
* Return: length of str
*/
int _strlen_recursion(char *s)
{
if (*s == 0)
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
