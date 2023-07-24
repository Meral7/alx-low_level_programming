#include "main.h"
#include <stdio.h>
/**
 *reset_to_98 - takes a pointer to an int as parameter
 *and updates the value of parameter it points to to 98.
 *@p: is a pointer.
 *Return : void
 */
void reset_to_98(int *p)
{
*p = 98;
}
/**
 * main - check the code updates the value of n to to 98.
 * Return: Always 0.
 */
int main(void)
{
int n;
n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
