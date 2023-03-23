#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list varlist;
	unsigned int i = 0, j, c = 0;
	const char fmts[] = "cifs";
	char *str;

	va_start(varlist, format);
	while (format && format[i])
	{
		j = 0;
		while (fmts[j])
		{
			if (format[i] == fmts[j])
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(varlist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(varlist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(varlist, double)), c = 1;
			break;
		case 's':
			str = va_arg(varlist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(varlist);
}
