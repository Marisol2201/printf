#include "holberton.h"

/**
* print_unknown - function to print unknown
* @arg: va_list type
* Return: always successful
*/

int print_unknown(va_list arg)
{
	char *str = "%r";

	(void)arg;
	_puts(str);

	return (_strlen(str));
}
