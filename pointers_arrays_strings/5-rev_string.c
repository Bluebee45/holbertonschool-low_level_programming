#include "main.h"
#include <stdio.h>

/**
 * rev_string - function
 * description - reverses a string
 * @s: argument for the function
 *
 */

void rev_string(char *s)
{
		int i = 0, x = 2;
while (s[i] != '\0')
i++;
for (x = i; x >= 0; x--)
putchar(s[x]);
putchar('\n');
}
