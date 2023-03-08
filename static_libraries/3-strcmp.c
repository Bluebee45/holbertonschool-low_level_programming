#include "main.h"

/**
 * _strcmp - function
 * description - compare two strings
 * @s1: is the argument for the function
 * @s2: is the second argument for the function
 *
 * Return: If str1 < str2, the negative difference of the first unmatched
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;										}
return (*s1 - *s2);
}
