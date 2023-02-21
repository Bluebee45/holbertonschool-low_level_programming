#include <stdio.h>

/**
 * main - function
 * description - print alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
char rvs = 'z';
for (rvs = 'z'; rvs >= 'a'; rvs--)
putchar(rvs);
putchar('\n');
return (0);
}
