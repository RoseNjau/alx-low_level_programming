#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: Pointer to the input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return 0;

        left++;
        right--;
    }

    return 1; 
}

int main(void)
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

        if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    if (is_palindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

