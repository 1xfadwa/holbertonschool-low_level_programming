#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything, followed by a new line
 * @format: list of the types of the arguments (c, i, f, s)
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed;
	char *s;
	char *sep = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		printed = 1;
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			break;
		default:
			printed = 0;
		}
		if (printed)
			sep = ", ";
		i++;
	}
	va_end(args);

	printf("\n");
}
