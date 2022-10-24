#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node at an index
 * @head: the list top pointer
 * @index: index of the node to be added
 * Return: gets the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old_node = *head;
			if (i == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((i + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - retrieves the number of nodes in the list
 * @h: the list top
 * Return: retrieves the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
