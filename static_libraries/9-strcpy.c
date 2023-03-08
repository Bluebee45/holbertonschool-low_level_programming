#include"main.h"

/**
 * _strcpy - function
 * @dest: is the argument for the function
 * @src: is the second argument for the function
 *
 * Return: the pointer
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
