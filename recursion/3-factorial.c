#include "main.h"

/**
 * factorial - function
 * description - Write a function that returns the factorial of a given number
 * @n: argument for the function
 *
 * Return: 0
 */

int factorial(int n)
{
int result = n;
if (n < 0)
	return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
