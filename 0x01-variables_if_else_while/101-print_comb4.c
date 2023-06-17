#include <stdio.h>

/**
 * main - Start
 * Return: 0 (Void)
 */

int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != d) && (q != d))
				{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == '7' && p == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
