#include <stdio.h>
#include <stdlib.h>
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
			sum += argv[i];
		printf("%d\n", sum);
	}
	
	return(0);
}
