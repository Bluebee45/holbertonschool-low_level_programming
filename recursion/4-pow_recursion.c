#include "main.h"

/**
 * _pow_recursion - function
 * description - function that returns the value of x raised to the power of y
 * @x: argument for the function
 * @y: argument for the function
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{	int result = x;
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
