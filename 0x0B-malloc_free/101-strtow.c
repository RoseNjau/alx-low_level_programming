#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	int count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	if (!extract_words(str, words, count))
	{
		free_words(words);
		free(words);
		return (NULL);
	}

	words[count] = NULL;

	return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * extract_words - Extracts words from a string and stores them in an array
 * @str: The input string
 * @words: The array to store the words
 * @count: The number of words to extract
 *
 * Return: 1 on success, 0 on failure
 */
int extract_words(char *str, char **words, int count)
{
	int i, j, k, len, word_len = 0, index = 0;

	for (i = 0; str[i] != '\0' && index < count; i++)
	{
		if (str[i] != ' ')
			word_len++;
		else if (word_len > 0)
		{
			words[index] = malloc((word_len + 1) * sizeof(char));
			if (words[index] == NULL)
				return (0);

			for (j = i - word_len, k = 0; j < i; j++, k++)
				words[index][k] = str[j];
			words[index][k] = '\0';

			word_len = 0;
			index++;
		}
	}

	if (word_len > 0 && index < count)
	{
		words[index] = malloc((word_len + 1) * sizeof(char));
		if (words[index] == NULL)
			return (0);

		for (j = i - word_len, k = 0; j < i; j++, k++)
			words[index][k] = str[j];
		words[index][k] = '\0';

		index++;
	}

	return (1);
}

/**
 * free_words - Frees the memory allocated for words
 * @words: The array of words
 */
void free_words(char **words)
{
	int i;

	for (i = 0; words[i] != NULL; i++)
		free(words[i]);
}

