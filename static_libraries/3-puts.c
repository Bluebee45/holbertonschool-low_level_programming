#include "main.h"

/**
 * _puts - function
 * description - prints a string
 * @str: is the argument for the function
 *
 * Return: 0
 */

void _puts(char *str)
{
int c;

for (c = 0; str[c] != 0; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
