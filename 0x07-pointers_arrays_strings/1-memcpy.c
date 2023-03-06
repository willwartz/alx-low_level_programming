#include "main.h"
/**
 * _memcpy - copies bytes from src to dest.
 * @dest: pointer to destination memory.
 * @src: pointer to source memory.
 * @n: number of bytes to set
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return(dest);
}
