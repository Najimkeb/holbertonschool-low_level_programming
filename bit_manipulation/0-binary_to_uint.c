#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer on string 0 or 1 char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, c = 1;
	int d;

	if (b == NULL)
		return (0);

	for (d = 0; b[d];)
		d++;

	for (d -= 1; d >= 0; d--)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);

		a += (b[d] - '0') * c;
		c *= 2;
	}
	return (a);
}
