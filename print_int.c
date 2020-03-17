#include "holberton.h"

/**
 * print_int - function to print char
 * @arg: va_list type
 * Return: always successful
 */

int print_int(va_list arg)
{
	int num = 0;

	num = va_arg(arg, int);

	return (_print_num(num));
}
