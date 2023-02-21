#include <stdio.h>

/**
 * main - function
 * description - print hexadecimal
 *
 * Return: 0
 */

int main(void)
{
int num = '0';
char lt = 'a';
for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
for (lt = 'a'; lt < 'g'; lt++)
putchar(lt);
putchar('\n');
return (0);
}
