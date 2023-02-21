#include <stdio.h>

/**
 * main - function
 * description - alphabt print
 *
 * Return: 0
 */

int main(void)
{
char letters = 'a';
for (letters = 'a'; letters <= 'z'; letters++)
if (letters != 'e' && letters != 'q')
putchar(letters);
putchar('\n');
return (0);
}
