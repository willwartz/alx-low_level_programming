#include "main.h"
/**
 * _strlen_recursion - finds string length.
 * @s: pointer to string.
 * Return: no return.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
