#include "lists.h"

/**
 * _strlen - length of a string
 * @str: pointer
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int u;

	for (u = 0; str[u]; u++)
		;
	return (u);
}

/**
 * add_node - dds a new node at the beginning of a list.
 * @head: double pointer
 * @str: pointer
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ele;

	if (str == NULL)
		return (NULL);
	ele = malloc(sizeof(list_t));
	if (ele == NULL)
		return (NULL);
	ele->str = strdup(str);
	if (ele->str == NULL)
	{
		free(ele);
		return (NULL);
	}
	ele->len = _strlen(ele->str);
	ele->next = *head;
	*head = ele;
	return (ele);
}
