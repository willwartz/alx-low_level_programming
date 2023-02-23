#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14, 10 times.
 *
 * _putchar - prints to output
 * 
 * Return: no return
 */

void more_numbers(void)
{
	int i = 0;
	int a = 0;

	while (a < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		a++;
		_putchar('\n');
	}
}
