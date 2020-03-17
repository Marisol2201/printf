#include "holberton.h"
#include <limits.h>

/**
* print_decimal - function to print char
* @arg: va_list type
* Return: always successful
*/

int print_decimal(va_list arg)
{
	int num;

	num = va_arg(arg, int);

	if (num <= INT_MAX && num >= INT_MIN)
		return (_print_num(num));
	else
		return (-1);
}
