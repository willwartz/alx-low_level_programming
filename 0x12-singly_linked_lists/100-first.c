#include "lists.h"

/**
 * print_before_main - function executed before main
 * Return: no return.
 */

void print_before_main(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
