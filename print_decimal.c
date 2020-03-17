#include "holberton.h"

/**
 * print_decimal - function to print char
 * @arg: va_list type
 * Return: always successful
 */

int print_decimal(va_list arg)
{
	int num = 0;

	num = va_arg(arg, int);

	return (_print_num(num));
}
