#include <stdio.h>

/**
 * main - Start
 * Return: 0 (Void)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');

	return (0);
}

