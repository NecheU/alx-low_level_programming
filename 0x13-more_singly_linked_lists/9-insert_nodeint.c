#include "lists.h"

/**
 * insert_nodeint_at_index - it inserts a new node at
 * a given position
 * @head: pointer to the list
 * @idx: position to add the new node
 * @n: data for the new node
 *
 * Return: address to the new added node or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *main_node = *head;
	listint_t *added_node;
	unsigned int index;
	unsigned int counter = 0;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;

	if (idx == 0)
	{
		added_node->next = *head;
		*head = added_node;
		return (*head);
	}

	index = idx - 1;
	while (main_node && counter != index)
	{
		counter++;
		main_node = main_node->next;
	}


	if (counter == index && main_node)
	{
		added_node->next = main_node->next;
		main_node->next = added_node;
		return (added_node);
	}

	free(added_node);
	return (NULL);
}
