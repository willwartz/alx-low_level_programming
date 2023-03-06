#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string.
 * @accept: substring of interest.
 * Return: the pointer to dest.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0, *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + i))
			{
				count++;
			}
			else
			{
				break;
			}
		}
	}
	return (count);
}
