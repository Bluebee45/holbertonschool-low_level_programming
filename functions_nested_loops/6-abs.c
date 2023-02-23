#include "main.h"
#include <stdio.h>

/**
 * _abs - function
 * description - compute the absoluthe value of a integral
 * @c: is the argument for the function
 * Return: 0
 */

int _abs(int c)
{
if (c > 0 || c == 0)
{
return (c);
}
else
return (c * -1);
}
