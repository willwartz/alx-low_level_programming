#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/

int main(void)
{
   long int num1, num2, fib, sum = 0;

   num1 = 1;
   num2 = 2;
   while(fib <= 4000000)
   {
      fib = num2 + num1;
      num1 = num2;
      num2 = fib;
      if ((num1 % 2) == 0)
      {
         sum += num1;
      }
   }
   printf("%ld\n", sum);
   return (0);
}