#include <stdio.h>

/**
 * print_to_98 - function
 * description - print all natural number
 * @n: is the argument for the function int
 *
 * Return: 0
 */

void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d", n);
}
}
