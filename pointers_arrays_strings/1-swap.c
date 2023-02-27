#include "main.h"

/**
 * swap_int - function
 * description - swap the value of two integers
 * @a: is the argument of the function
 * @b: is the other function
 *
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
