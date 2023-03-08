#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to string.
 * Return: the pointer to s.
 */
 void _puts_recursion(char *s)
 {
 	if (*(s + 1) != '\0')
 	{
 		_putchar(*s);
 		_puts_recursion(s + 1);
 	}
 	else
 		_putchar('\n');
 }
 