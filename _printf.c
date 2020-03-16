#include "holberton.h"

/**
* _printf - function to print all inputs
* @format: const pointer to functionof type char
* Return: always successful
*/

int _printf(const char *format, ...)
{

	int i = 0, j = 0;
	va_list arg;

	pt_t types[] = {
		{"i", "int", print_int},
		{"c", "int", print_char},
		{"s", "char", print_string},
		{"d", "int", print_decimal},
		{"%", "%", print_percent},
		{NULL, NULL, NULL}
	};

	va_start(arg, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (types[j].test)
			{
				if (types[j].test[0] == *format)
				{
					types[j].printer(arg);
				}
				j++;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
		i++;
	}

	va_end(arg);

	return (i);
}
