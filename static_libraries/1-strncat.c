#include "main.h"

/**
 * _strncat - function
 * description - Concatenates two strings using at most
 * @dest: is the argument for the function
 * @src: is the second argument for the function
 * @n: The number of bytes
 *
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
