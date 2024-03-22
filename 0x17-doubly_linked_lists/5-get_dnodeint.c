#include "lists.h"

/**
 * get_dnodeint_at_index - C function that returns
 * rhe nth node of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index to return
 *
 * Return: nth Index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present_n = head;
	unsigned int t = 0;

	while (present_n != NULL && i < index)
	{
		present_n = present_n->next;
		t++;
	}

	return (i == index ? present_n : NULL);
}
