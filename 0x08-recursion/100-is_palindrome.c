#include "main.h"
/**
 * _strlen_recursion - finds string length.
 * @s: pointer to string.
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compar - compares leftmost to rightmost string char.
 * @s: pointer to string.
 * @start: 1st string index.
 * @end: last string index.
 * Return: 1 Success, 0 otherwise.
 */
int compar(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (compar(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is a palindrome.
 * @s: pointer to string.
 * Return: 1 Success, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compar(s, 0, _strlen_recursion(s) - 1));

}
