#include "variadic_functions.h"
/**
* print_all - function that prints anything
* @format: if 'c, s, i or f' passed, acts like a printf() functions
* otherwise, ignores the character and prints the args passed
* Return: Void
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list par;

	i = 0;
	va_start(par, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(par, int));
					break;
			case 'i':
					printf("%d", va_arg(par, int));
					break;
			case 'f':
					printf("%f", va_arg(par, double));
					break;
			case 's':
					printf("%s", va_arg(par, char *));
					break;
		}
		if ((format[i] == 'f' || format[i] == 'i' ||
			format[i] == 's' || format[i] == 'c') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(par);
}
