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
	int i, a;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58 ; a++)
		{
			if (i < a)
			{
				putchar(i);
				putchar(a);
				if (i < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
