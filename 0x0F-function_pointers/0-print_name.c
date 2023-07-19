#include "main.h"

/**
 * print_name - Prints a name by use of a function pointer.
 * @name: Pointer to the name to print
 * @f: Pointer to function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
