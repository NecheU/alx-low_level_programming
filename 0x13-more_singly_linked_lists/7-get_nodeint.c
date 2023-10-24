#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list
 * @head: pointer to the list
 * @index: nth node
 *
 * Return: nth nod. if node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int counter = 0;


	while (node && counter != index)
	{
		counter++;
		node = node->next;
	}
	if (node && counter == index)
		return (node);
	return (NULL);
}
