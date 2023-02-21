#include "main.h"
/**
 * main - Entry Point
 *
 * _putchar - Print to output
 *
 * Return: Always 0
*/

void jack_bauer(void)
{
    
    int H, h, M, m;

    for (H = 48; H <= 50; H++)
    {
        for (h = 48; h <= 57; h++)
        {
            for (M = 48; M <= 53; M++)
            {
                for (m = 48; m <= 57; m++)
                {
                    if (H >= 50 && h >= 52)
                        break;
                    _putchar(H);
                    _putchar(h);
                    _putchar(58);
                    _putchar(M);
                    _putchar(m);
                    _putchar('\n');
                }
            }
        }
    }
}

