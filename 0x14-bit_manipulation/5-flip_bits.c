#include "main.h"

/**
 * flip_bits - fn that counts the num of bits to change from to another
 * @n: first num
 * @m: second num
 * au: gto
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a = 0;
int b = 0;
unsigned long int wave;
unsigned long int exclusive = n ^ m;

for (a = 63; a >= 0; a--)
{
wave = exclusive >> a;
if (wave & 1)
b++;
}
return (b);
}

