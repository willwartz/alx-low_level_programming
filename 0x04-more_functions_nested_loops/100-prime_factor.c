#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long long int a = 612852475143;
	long long int i = 2;

	while (i <= a)
	{
		if (a % i == 0)
		{
			printf("%d ", i);
			a /= i;
		}
		else
			i++;
	}
	printf("\n");
	return (0);
}