#include "main.h"
/**
 * main - Entry Point
 *
 * _putchar - Print to output
 *
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
    int i;
    int a = 0;

    while (a < 9)
    {
        for (i = 97; i <= 122; i++)
        {
            _putchar(i);
        }
    }a++
    _putchar('\n');
}

