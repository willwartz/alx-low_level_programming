#include "main.h"

/**
 * _isupper - checks if parameter is lowercase.
 * @c: input character.
 * Return: 1 if its lowercase, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
