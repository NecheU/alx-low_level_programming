#include "lists.h"


size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - It counts the number of unique nodes
 * in a looped listint_t linkee list
 * @head: pointer to the head of listint list
 *
 * Return: number of unique nodes in the list or 0 if the list
 * is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *b, *c;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	b = head->next;
	c = (head->next)->next;

	while (c)
	{
		if (b == c)
		{
			b = head;
			while (b != c)
			{
				nodes++;
				b = b->next;
				c = c->next;
			}

			b = b->next;
			while (b != c)
			{
				nodes++;
				b = b->next;
			}
			return (nodes);
		}
		b = b->next;
			c = (c->next)->next;
	}
	return (0);
}


/**
 * print_listint_safe - It prints listint_t safely
 * @head: pointer to the head of the listimt_t list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, e;

	nodes = looped_listint_len(head);


	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (e = 0; e < nodes; e++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
