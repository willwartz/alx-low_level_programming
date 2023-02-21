#include "main.h"
/**
 * main - Entry Point
 *
 * _putchar - Print to output
 *
 * Return: Always 0
*/

int _isalpha(int c)
{
    if ((c >= 65 && c <=90) || (c >= 97 && c <= 122))
    {
        return(1);
    }
    else
    {
        return(0);
    }
    _putchar('\n');
}

