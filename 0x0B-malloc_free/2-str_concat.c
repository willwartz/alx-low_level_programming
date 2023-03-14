#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
        unsigned int i, j, k, cap;
        char *constr;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i] != '\0'; i++)
                ;

        for (j = 0; s1[j] != '\0'; j++)
                ;

        constr = (char *)malloc(sizeof(char) * (i + j + 1));

        if (constr == NULL)
                return (NULL);

        for (k = 0; k < i; k++)
                constr[k] = s1[k];

        cap = j;

        for (j = 0; j <= cap; j++)
                constr[k] = s2[j];

        return (constr);
}
