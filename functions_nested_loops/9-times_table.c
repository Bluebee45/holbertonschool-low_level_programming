#include "main.h"

/**
 * times_table - function
 * description - prints the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
c = a * b;
}
if (c > 9)
_putchar(44);
_putchar(32);
_putchar(c = '0');
_putchar('\n');
}

