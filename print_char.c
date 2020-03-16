#include "holberton.h"

/**
 * print_char - function to print char
 * @arg: va_list type
 * Return: always successful
 */

void print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
}
