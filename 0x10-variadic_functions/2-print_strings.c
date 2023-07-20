#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: The string to print between strings.
 * @n: Number of strings presented to the function.
 * @...: Variable number of strings to print.
 *       Number of strings should equal to 'n'.
 *       If a string is NULL, print "(nil)" instead.
 *       If 'separator' is NULL, do not print it.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, const char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
