#include "lists.h"

/**
 *free_list - frees the list from memory
 *@head: pointer to the list head
 *Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
