#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that contans the binary number
 *
 * Return:  convert number value
 */
unsigned int binary_to_uint(const char *b)
{
int indexi;
unsigned int value = 0;

if (!b)
return (0);
for (indexi = 0; b[indexi]; indexi++)
{
if (b[indexi] < '0' || b[indexi] > '1')
return (0);
value = 2 * value + (b[indexi] - '0');
}
return (value);
}
