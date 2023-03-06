#include "main.h"
/**
 * _memset - ,
 * @s: pointer to memory area.
 * @b: the constant to be set.
 * @n: number of bytes to set
 * Return: the pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
