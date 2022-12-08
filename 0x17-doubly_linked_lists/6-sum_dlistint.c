#include "lists.h"

/**
 *  sum_dlistint - retrieves sum
 * @head: double pointer to the list head
 *
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
