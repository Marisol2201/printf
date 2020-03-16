#include "holberton.h"

/**
* print_decimal - function to print number
* @arg: va_list type
* Return: always successful
*/

void print_decimal(va_list arg)
{
	int num = 0;

	num = va_arg(arg, int);
	_print_num(num);
}
