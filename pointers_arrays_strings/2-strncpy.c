#include "main.h"

/**
 * _strncpy - function
 * description - copies a string
 * @dest: is the argument for the function
 * @src: is the second argument for the function
 * @n: The numeber of bytes
 *
 * Return: The pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i;
		for (i = 0; src[i] != n; i++)
		{
				dest[i] = src[i];
		}
		dest[i++] = n;
		return (dest);
}
