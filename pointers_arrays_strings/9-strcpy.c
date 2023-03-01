#include"main.h"

/**
 * _strcpy - function
 *  terminating null byte, to a buffer pointed to by @dest.
 * description - copy a string
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
