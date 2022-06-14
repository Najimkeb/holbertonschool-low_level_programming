#include "main.h"

/**
 * _isdigit - Cfr description
 * @c: input character
 * Description: checks for lower case character
 * Return: 1 if is lowercase and 0 otherwise
 */

int _isdigit(int c);
{
	int i;
	int b = 0;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		b = 1;
	}
	return (b);
}
