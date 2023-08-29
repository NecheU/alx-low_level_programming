#include "lists.h"
/**
* insert_nodeint_at_index - It returns the nth node of a linked list
* @head: pointer to the head of the list
* @idx: index to the node
* @n: content of the new node
*
* Return: Address of the node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *added_node = NULL;
listint_t *former_node = NULL;
unsigned int a = 0;

added_node = malloc(sizeof(listint_t));
if (added_node == NULL ||  idx > listint_len(*head))
{
free(added_node);
return (NULL);
}
added_node->n = n;
added_node->next = NULL;
while (head != NULL)
{
if (a == idx)
{
if (a == 0)
{
added_node->next = *head;
*head = added_node;
return (added_node);
}
added_node->next = former_node->next;
former_node->next = added_node;
return (added_node);
}
else if ((a + 1) == idx)
former_node = *head;
head = &((*head)->next);
a++;
}
return (NULL);
}
