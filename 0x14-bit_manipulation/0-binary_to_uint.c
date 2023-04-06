#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len;

	if (!b)
		return (0);
	
	for (len = 0; b[len] != '\0'; len++)
		;
	
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			i += 1 << (len - i - 1);
	}
	return (i);
}