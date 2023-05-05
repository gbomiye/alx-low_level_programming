#include "main.h"

/**
 * clear_bit - sets the value of a given bit to zero
 * @n: pointer to the num to change
 * @index: index of the bit to clear
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
