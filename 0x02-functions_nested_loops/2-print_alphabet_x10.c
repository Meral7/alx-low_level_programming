#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters 10 times followed by a new line.
*Return: void
*/
void print_alphabet_x10(void)
{
int j = 0;
char m = 'a';
for (j = 0; j < 10; j++)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar(10);
}
}
