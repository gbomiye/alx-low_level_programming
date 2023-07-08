#include "main.h"

/**
 * clear_bit - fn that sets value of given bit to 0
 * @n: points to the number to change
 * @index: index of bit to be cleared
 *
 * Return: 1 for success else -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
