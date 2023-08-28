#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a linked list
 * @head: pinter to the head of the linked list
 * @index: index of the node
 *
 * Return: The adress of the mode
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *d = NULL;
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c <= index)
		{
			if (c == index)
			{
				d = head;
				break;
			}
			head = head->next;
			c++;
		}
		else
			return (NULL);
	}
	return (d);
}
