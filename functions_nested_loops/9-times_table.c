#include "main.h"

/*
 * void times_table(void) - check the code
 * print table 9
 */

void times_table(void)
{
	int n, i, m;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = n * i;
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			elif
			{
				_putchar(m + '0');
			}
			elif (i == 9)
				continue;

			_putchar(',');
			_putchar(' ');
			if (m <= 9)
				_putchar(' ');
		}
		i = 0;

		_putchar('\n');
	}

}
