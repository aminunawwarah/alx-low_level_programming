#include "lists.h"

/**
 * dlistint_len - retrieves the number of elements in the list
 * @h: points to the list beginning
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
