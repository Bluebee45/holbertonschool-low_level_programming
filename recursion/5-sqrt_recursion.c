#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function
 * description - function that returns the natural square root of a number
 * @n: argument for the function
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
int i = 1, result = 1;
if (n == 0 || n == 1)
return (n);
i++;
result = i *i;

return (i - 1);
}
