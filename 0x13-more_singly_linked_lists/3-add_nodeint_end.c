#include "lists.h"
/**
 * add_nodeint_end - a fuction that adds new node at the end of the
 * linked list
 * @head: pointer to the head of the list
 * @n: number to be considered
 * Return: Address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node;
	listint_t *a = *head;

	added_node = malloc(sizeof(listint_t));
	if (added_node != NULL)
	{
		added_node->n = n;
		added_node->next = NULL;
	}
	else
		return (NULL);
	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;

		a->next = added_node;
	}
	else
		*head = added_node;
	return (added_node);
}
