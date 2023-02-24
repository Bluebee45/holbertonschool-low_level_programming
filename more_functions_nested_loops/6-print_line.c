#include "main.h"

/**
 * print_line - function
 * description - Draws a straight line using the character _.
 * @n: The number of  characters to be printed.
 *
 * Return: 0
 */
void print_line(int n)
{
int len;

if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');
}
