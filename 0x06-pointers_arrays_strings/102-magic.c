#include <stdio.h>

/*
 *main - magic number
 * write your line of code here...
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

*(p + 5) = 98;
  /* ...so that the program prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

