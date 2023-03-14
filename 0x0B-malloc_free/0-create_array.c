#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,initializes
 * it with a specific char
 * @c: character.
 * @size: size.
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (s);
}
