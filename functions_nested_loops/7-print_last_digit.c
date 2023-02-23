#include "main.h"

/**
 * print_last_digit - function
 * description - print the last digit of a number
 * @c: is the argument for the function
 *
 * Return: 0
 */

int print_last_digit(int c)
{
if (c > 0 || c == 0)
{
_putchar (c % 10 + '0');
return (c % 10);
}
else
{
c = c * -1;
_putchar (c % 10 + '0');
return (c % 10);
}
}
