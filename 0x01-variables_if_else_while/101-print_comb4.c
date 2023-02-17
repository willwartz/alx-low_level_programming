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
	int i, a, j;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58 ; a++)
		{
			for (j = 48; j < 58; j++)
			{
				if (i < a && a < j)
				{
					putchar(i);
					putchar(a);
					putchar(j);
					if (i < 55 && a < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
