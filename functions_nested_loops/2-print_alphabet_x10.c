#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - function
 * description - print alphabet ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char x, u;
for (u = 0; u <= 9; u++)
{
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}
}
