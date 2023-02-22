#include "main.h"

/**
 * _isalpha - function
 * description - check the alphabetics character
 * @c: is the the argument of the function
 *
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
