#include "main.h"

/**
 * more_numbers- print 0 of 14
 *
 */

void more_numbers(void)
{
	int a, n;

	for (a = 0; a <= 10; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 8)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
