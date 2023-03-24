#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @si: size of the square
 */
void print_square(int si)
{
if (si <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < si; i++)
{
for (j = 0; j < si; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

