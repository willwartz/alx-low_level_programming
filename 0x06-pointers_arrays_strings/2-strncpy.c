#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies the string pointed to by src upto n
 *@n: limit for copying
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
