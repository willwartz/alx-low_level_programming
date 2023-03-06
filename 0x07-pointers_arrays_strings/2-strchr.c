#include "main.h"
/**
 * _strchr - locates character to string.
 * @s: the string.
 * @c: character of interest.
 * Return: the pointer to dest.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return(s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
