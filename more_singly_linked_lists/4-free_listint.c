#include "lists.h"

/**
 * free_listint -  frees a list.
 * @head: pointer
 *
 * Return: Anything
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
