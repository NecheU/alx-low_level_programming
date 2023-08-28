#include "lists.h"
/**
 * add_nodeint - A fuction that adds new node at the
 * beginning of listint_t list
 * @h: pointer to the address of the head of the listint_t list
 * @n: the interger for the new node to contain
 * 
 * Return: The addeess of the element
 * or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = *head;

	*head = added;

	return (added);
}
