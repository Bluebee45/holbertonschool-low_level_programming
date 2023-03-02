#include "main.h"

/**
 * reverse_array - function
 * description - reversez the content of an array
 * @a: is the argument for the function
 * @n: is the argument for the function
 *
 */

void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];								a[n - 1 - index] = a[index];							a[index] = tmp;
}
}
