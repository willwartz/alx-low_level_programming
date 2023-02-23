#include "main.h"

/**
 * print_diagonal - prints \ n times.
 * 
 * _putchar - prints to output
 *  
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, a;

	for (i = 0; i < n; i++)
	{
		for ( a = 0; a < i; a++)
			_putchar(32);
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
