#include "lists.h"

/**
 * listint_len - returns the number of elements in linked list ...
 * @h: head of a list.
 *
 * Return: the total numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
