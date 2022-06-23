#include "main.h"

/**
 * _strstr - substring needle in the string haystack
 *
 * @haystack:variable
 * @needle:variable
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{

	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
