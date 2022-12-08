#include "lists.h"

/**
 * free_dlistint - eliminate the linked lisk
 * @head: pointer to the list beginning
 *
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
