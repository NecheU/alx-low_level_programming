#include "lists.h"

/**
* find_listint_loop - Finds the loop contained in
* a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: If there is no loop - NULL.
* Otherwise - the address of the node where the loop starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *y, *z;

if (head == NULL || head->next == NULL)
return (NULL);

y = head->next;
z = (head->next)->next;

while (z)
{
if (y == z)
{
y = head;

while (y != z)
{
	y = y->next;
z = z->next;
}

return (y);
}

y = y->next;
z = (z->next)->next;
}

return (NULL);
}
