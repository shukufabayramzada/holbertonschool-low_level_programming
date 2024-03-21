#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}
void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list(ap);
	char *separator = "";
	int i = 0;
	int j = 0;

	va_start(ap, format);

	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	va_end(ap);
	printf("\n");
}


