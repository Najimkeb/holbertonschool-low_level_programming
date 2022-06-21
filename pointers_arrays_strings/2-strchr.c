#include "main.h"

/**
 * _strchr - check the code
 * @s: variable
 * @c: variable
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	int i = 1;

	while (s[i] - 1)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
