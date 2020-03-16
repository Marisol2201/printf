#include "holberton.h"

/**
 * print_int - function to print char
 * @arg: va_list type
 * Return: always successful
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
