#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _print_num - This function is print number
 *
 * @n: number to printer
 * Return: Description of the returned value
 */

int _print_num(int n)
{

	int  sign, exp, i = 0;

	exp = 1000000000;
	sign = 1;
	if (n > 0)
	{
		n *= -1;
		sign *= -1;
	}
	if  (n != 0)
	{
		while ((n / exp) ==  0)
		{
			exp = exp / 10;
		}
		if (sign == 1)
		{
			_putchar('-');
			i++;
		}
		while (exp >= 1)
		{
			_putchar(-(n / exp) + '0');
			i++;
			n = n % exp;
			exp = exp / 10;
		}
	}
	else
		_putchar('0');

	return (i);

}
