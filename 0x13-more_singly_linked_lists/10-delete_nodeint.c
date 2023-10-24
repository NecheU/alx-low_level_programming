#include "lists.h"
/**
 * delete_nodeint_at_index - It deletes at index
 * of a listint_t list
 * @head: is a pointer fo the list
 * @index: position of the node to be deleted
 *
 * Return: 1 if successful, else 1-
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *main_node = *head;
	listint_t *delete = *head;
	unsigned int a;
	unsigned int counter = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = delete->next;
		free(delete);
		return (1);
	}

	a = index - 1;
	while (main_node && counter != a)
	{
		counter++;
		main_node = main_node->next;
	}

	if (counter == a && main_node)
	{
		delete = main_node->next;
		main_node->next = delete->next;
		free(delete);
		return (1);
	}

	return (-1);
}
