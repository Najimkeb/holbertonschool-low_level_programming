#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int n;

for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
if (n==10)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
