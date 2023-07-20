#include <unistd.h>

/**
* _putchar - writes the charcter c to stdout
* @c: The character to print
*
*Return: 1 On Success, -1 On error,
* and errno is set to appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
