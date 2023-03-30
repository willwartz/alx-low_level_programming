#include "lists.h"

/**
 * print_before_main - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

