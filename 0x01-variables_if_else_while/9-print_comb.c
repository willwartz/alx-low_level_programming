#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry Point
 *
 * printf - Print to output
 *
 * Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
			putchar(i);
			if (i != 10)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}