#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
   long int fib0, fib1, fib2;
   int i;

   fib0 = 1;
   fib1 = 2;
   printf("%ld, %ld", fib0, fib1);
 	for (i = 0; i < 48; i++)
 	{
 		fib2 = fib1 + fib0;
      printf(", %ld", fib2);
      fib0 = fib1;
      fib1 = fib2;
 	}
 	printf("\n");
 	return (0);
}