#include "main.h"

/**
 * print_triangle - prints #
 * @size: number to iterate over
 *
 * _putchar - prints to output
 *
 * Return: no return
 */

void print_triangle(int size)
{
	int i, a;

	for (i = 0; i < size; i++)
	{
		for (a = 1; a < (size - i); a++)
			_putchar(32);
		for (a-- ; a < size; a++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
