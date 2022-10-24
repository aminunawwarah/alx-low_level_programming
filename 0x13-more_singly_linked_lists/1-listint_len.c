#include "lists.h"


/**
 *listint_len - retrieve number of all elements
 *@h: top of the list
 *Return: retrive the sum of all the elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
