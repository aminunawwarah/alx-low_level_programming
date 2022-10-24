#include "lists.h"

/**
 *sum_listint - add all numbers in the list
 *@head: the list top
 *Return: retrieves the total of the numbers
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
