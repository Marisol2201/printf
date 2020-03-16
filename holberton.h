#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct pt - Struct pt
 *
 * @test: The operator
 * @typed: Type data
 * @printer: The function associated
 */
typedef struct pt
{
	char *test;
	char *typed;
	void (*printer)();
} pt_t;

void _puts(char *str);

int _putchar(char Text);

int _printf(const char *format, ...);

void print_int(va_list arg);

void print_char(va_list arg);

void print_string(va_list arg);

void print_decimal(va_list arg);

void _print_num(int num);

void print_percent(va_list arg);

#endif
