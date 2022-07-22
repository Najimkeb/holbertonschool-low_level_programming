#include "lists.h"

/**
 * print_dlistint - prints all the elements of a  list.
 * @h: head
 *
 * Return: The number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
