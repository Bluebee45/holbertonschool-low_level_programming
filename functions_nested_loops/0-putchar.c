#include "main.h"
#include <stdio.h>

/**
 * main - function
 * description - putchar
 *
 * Return: 0
 */

int main(void)
{
char _putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
signed int x;
for (x = 0; < sizeof(_putchar); x++)
{
_putchar(_putchar[x]);
}
_putchar('\n');
return (0);
}
