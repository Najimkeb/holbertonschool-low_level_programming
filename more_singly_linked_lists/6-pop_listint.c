#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
