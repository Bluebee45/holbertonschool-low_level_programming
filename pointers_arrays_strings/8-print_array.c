#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 * description - prints elements of an array of integers
 * @a: is the argument for the function
 * @n: is the second argument for the function
 *
 */

void print_array(int *a, int n)

{

		int index;
for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index == n - 1)
continue;
printf(", ");
}
printf("\n");
}
