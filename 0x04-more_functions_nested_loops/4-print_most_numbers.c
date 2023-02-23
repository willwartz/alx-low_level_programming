#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 excluding 2 & 4.
 *
 * _putchar - prints to output
 *
 * Return: multiplication
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
