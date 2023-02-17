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
	int i, a, j, k, dig1, dig2;

	for (i = 48; i < 58; i++)
	{
		for (a = 48; a < 58 ; a++)
		{
			for (j = 48; j < 58; j++)
			{
				for (k = 48; k < 58; k++)
				{
					dig1 = (i*10) + a;
					dig2 = (j*10) + k;

					if (dig1 < dig2)
					{
						putchar(i);
						putchar(a);
						putchar(' ');
						putchar(j);
						putchar(k);
						if (i == 57 && a == 56)
						{
							break;
						}
						else {
							putchar(',');
							putchar(' ');
						}
						}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
