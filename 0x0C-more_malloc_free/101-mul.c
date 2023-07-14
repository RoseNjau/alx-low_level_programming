#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string is a valid positive number
 * @str: The input string
 *
 * Return: 1 if the string is a valid positive number, 0 otherwise
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
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The multiplication result
 */
unsigned long int multiply(unsigned long int num1, unsigned long int num2)
{
	return num1 * num2;
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, result;

	// Check if the correct number of command-line arguments is provided
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	// Check if the provided arguments are valid positive numbers
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	// Convert the command-line arguments to unsigned long integers
	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);

	// Perform the multiplication operation
	result = multiply(num1, num2);

	// Print the result
	printf("%lu\n", result);

	return (0);
}

