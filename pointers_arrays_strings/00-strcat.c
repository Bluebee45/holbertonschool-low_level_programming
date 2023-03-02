#include "main.h"

/**
 * _strcat - function
 * description - Write a function that concatenates two strings
 * @dest: is the argument for the function
 * @src: is the second argument for the function
 *
 * Return: A pointer
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
