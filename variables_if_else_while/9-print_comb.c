#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int numbers = 48;
for (numbers = 48; numbers <= 57; numbers++)
{
putchar(numbers);
if (numbers != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
