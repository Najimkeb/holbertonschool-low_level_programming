#include "main.h"
#include <stdio.h>

/**
 * void times_table(void) - check the code
 *
 */

void times_table(void);
{
	int n, i;

	printf("imprime une table ");
	scanf("%d", &n);
	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
}
