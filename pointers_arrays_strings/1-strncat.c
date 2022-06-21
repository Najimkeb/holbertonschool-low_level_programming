#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a + n + 1] = '\0';

	return (dest);
}
