#include "main.h"

/**
 * get_endianness - fn that checks if  machine is little or big endian
 * au: gto
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)

{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
