#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i])
		}
		printf("%d\n", sum);
	}
	else
		return (0);
}
