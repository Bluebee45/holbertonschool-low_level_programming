#include "main.h"

/**
 * _atoi - function
 * description - convert a string into a integer
 * @s: argument for the function
 *
 *Return: the integer value
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *sign);
}
