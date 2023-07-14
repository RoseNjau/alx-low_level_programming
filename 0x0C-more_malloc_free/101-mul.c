#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Inspects if string is a positive number
 * @str: Input string
 *
 * Return: 1 if a string is a valid positive number, 0 otherwise
 */
int is_digit(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Multiplication result
 */
unsigned long int multiply(unsigned long int num1, unsigned long int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Command-line argument strings arrays
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	result = multiply(num1, num2);

	printf("%lu\n", result);

	return (0);
}
