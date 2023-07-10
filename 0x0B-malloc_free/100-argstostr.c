#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: Array of argument strings
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len, total_len = 0, index = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = strlen(av[i]);
total_len += len;
}

total_len += ac - 1;

str = malloc((total_len + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = strlen(av[i]);
for (j = 0; j < len; j++)
{
str[index++] = av[i][j];
}
if (i < ac - 1)
str[index++] = '\n';
}

str[index] = '\0';

return (str);
}





