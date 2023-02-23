#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int a = 612852475143;
	long int i = 2;

	while (i <= a)
	{
		if (a % i == 0)
		{
			a /= i;
		}
		else
			i++;
	}
	printf("%ld\n", i);
	return (0);
}
