#include "lists.h"

/**
 * print_dlistint - shows all the elements in the list
 * @h: points to the beginning of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
