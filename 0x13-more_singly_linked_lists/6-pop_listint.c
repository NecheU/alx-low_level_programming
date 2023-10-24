#include "lists.h"

/**
 * pop_listint - It deletes the head node of a listint_t list
 * @head: pointer to the list
 *
 * Return: head node's value
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	value = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (value);
}
