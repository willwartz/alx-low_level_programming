#include "main.h"
/**
 * main - Entry Point
 *
 * _putchar - Print to output
 *
 * Return: Always 0
*/

int main(void)
{
    int myStr[] = {95, 112, 117, 116, 99, 104, 97, 114};
    int syz, cnt;

    syz = sizeof(myStr) / sizeof(int);
    for (cnt = 0; cnt < syz; cnt++)
    {
        _putchar(myStr[cnt]);
    }
    _putchar('\n');
    return (0);
}

