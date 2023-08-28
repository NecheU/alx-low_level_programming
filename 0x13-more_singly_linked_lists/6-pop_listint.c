#include "lists.h"
/**
 * pop_listint - A function rhat deletes the head node
 * of listint list
 * @head: pointer to rhe address of the head of rhe listint list
 *
 * Return: 0 if NULL, otheewise, the node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (*head == NULL)
		return (0);

	node = *head;
	a = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (a);
}
