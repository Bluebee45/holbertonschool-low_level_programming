#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 * description - check the code for Holberton School students.
 * @str: argument for array
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
