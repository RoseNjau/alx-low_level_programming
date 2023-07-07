#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * @argc: Number of command-line arguments passed
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

