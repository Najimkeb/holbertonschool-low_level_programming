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
for (c = 61; c < 66; c++)
putchar("%d", n);
putchar("%d", c);
putchar("\n");
return (0);
}
