#include "main.h"

/**
 *int _isupper(int c) - Cfr description
 * @c: input character
 * Description: checks for lower case character
 * Return: 1 if is lowercase and 0 otherwise
 */

int _isupper(int c)

{
	char i;
	int b = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		b = 1;
	}
	return (b);
}

