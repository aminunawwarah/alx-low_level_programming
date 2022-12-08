#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the nth element in the list
 * @head: double pointer to the list head
 * @index: index of the node to be returned
 *
 * Return: 0 on success otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
