#include "main.h"

/**
 * print_binary - print the binary of a dec number
 * @n: number to return in binary
 * Au - gt
 * Returns: a binary equi.
 */

void print_binary(unsigned long int n)

{
int index = 0;
int c = 0;
unsigned long int current;
for (index = 63; index >= 0; index--)
{
wave = n >> i;
if (wave & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
