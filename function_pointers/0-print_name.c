#include "function_pointers.h"

/**
 * print_name - function
 * description - print a name 
 * @name: argument for the function
 * @f: argument for the function
 */
void print_name(char *name, void (*f)(char *));
{
  if (name == NULL || f == NULL)
    return;

  f(name);
}
