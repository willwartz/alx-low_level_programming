#include "main.h"
/**
 * main - Entry Point
 *
 * _putchar - Print to output
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}