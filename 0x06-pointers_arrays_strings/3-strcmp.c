#include "main.h"
/**
 * _strcmp - compares string s1 with s2
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0 Success.
 */
int _strcmp(char *s1, char *s2)
{
        int i = 0, df = 0;

        while (df == 0)
        {
                if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
                        break;
                df = *(s1 + i) - *(s2 + i);
                i++;
        }
        return(df);
}