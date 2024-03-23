#include "lists.h"

/**
 * delete_dnodeint_at_index - C function that deletes a node at a
 * given position in a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index to be deleted
 *
 * Return: 1 if successful or -1 if falure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new_n;
	unsigned int y;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		new_n = *head;
		*head = (*head)->next;
		if (*head != NULL)
			{
				(*head)->prev = NULL;
			}
		free(new_n);
		return (1);
	}

	new_n = *head;
	y = 0;
	while (new_n != NULL && y < index)
	{
		new_n = new_n->next;
		y++;
	}

	if (y < index)
	{
		return (-1);
	}
	if (new_n->next != NULL)
	{
		new_n->next->prev = new_n->prev;
	}
	free(new_n); 
	return (1);
}
