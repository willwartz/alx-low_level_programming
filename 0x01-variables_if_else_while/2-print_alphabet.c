#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry Point
 *
 * printf - Print to output
 *
 * Return: Always 0
*/
int main(void)
{
	int i;
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');
			
	return (0);
}
