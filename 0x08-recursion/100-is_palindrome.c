#include <string.h>

/**
 * search_palindrome - Check if striing s is palindrome
 * @s: The given string
 * @i: Left pointer
 * @j: Right pointer
 * Return: 1 if string is palindrome, 0 otherwise
 */
int search_palindrome(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (search_palindrome(i + 1, j - 1, s));
}

/**
 * is_palindrome - Entry point, check string for palindrome
 * @s: String to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (search_palindrome(0, strlen(s) - 1, s));
}
