#include "main.h"
/**
 * cap_string - capitalize all words of string.
 * @s: pointer to string.
 * Return: s.
 */

char *cap_string(char *s)
{
        int sep[] ={9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
        int count = 0, i;

        if (*(s + count) >= 97 && *(s + count) <= 122)
                *(s + count) = *(s + count) - 32;
        count++;
        while (*(s + count) != '\0')
        {
                for (i = 0, i < 13; i++)
                {
                        if (*(s + count) == sep[i])
                        {
                                if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
                                        *(s + (count + 1)) = *(s + (count + 1)) - 32;
                                break;
                        }
                }
                count++;
        }
        return (s);

}