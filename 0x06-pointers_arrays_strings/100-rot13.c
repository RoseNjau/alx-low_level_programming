#include "main.h"

/**
 * rot13 - Applies the ROT13 cipher to a string.
 * @str: The string to apply the cipher to.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (str[i] == alp[j])
			{
				str[i] = rot13_alp[j];
				break;
			}
		}
	}

	return (str);
}
