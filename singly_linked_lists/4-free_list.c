#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *h, *next;

	h = head;
	while (h != NULL)
	{
		next = h->next;
		free(h->str);
		free(h);
		h = next;
	}

}
