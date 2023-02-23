#include "main.h"

/**
 * print_line - prints _ n times.
 * @n: number of times to iterate
 *
 * _putchar - prints to output
 *
 * Return: no return
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
