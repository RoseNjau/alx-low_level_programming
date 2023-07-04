#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: String to be searched.
 * @accept: String of acceptable bytes.
 *
 * Return: Number of bytes in the first segment
 * of s 
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (count);
}
