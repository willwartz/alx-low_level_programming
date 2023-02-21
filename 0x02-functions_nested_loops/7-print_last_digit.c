#include "main.h"
/**
 * main - Entry Point
 *
 * _putchar - Print to output
 *
 * Return: Always 0
*/

int print_last_digit(int n)
{
    n = n % 10;

    if(n < 0)
    {
        _putchar(-n + '0');
        return(-n);
    }
    else
    {
        _putchar(n + '0');
        return(n);
    }
}

