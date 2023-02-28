#include "main.h"

/**
 * rev_string - function
 * description - reverses a string
 * @s: argument for the function
 *
 */

void rev_string(char *s)
{
		int i = 0, x = 0;
		char sec;

while (s[i] != '\0')
x++;
		for (x = i - 1; x >= x / 2; i--)
{
		sec = s[i];
		s[i] = s[x - i - 1];
		s[x - i - 1] = sec;
}
}
