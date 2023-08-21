#include "main.h"

/**
 * print_char - to print one charactar
 * @arg: taking variadic function.
 * Return: A total count of the characters printed.
 */

int print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	_putchar(ch);
	return (1);
}

/**
 * print_per - to print % charactar.
 * @arg: taking variadic function.
 * Return: A total count of the characters printed.
 */

int print_per(__attribute__((unused)) va_list arg)
{
	char ch = '%';

	_putchar(ch);
	return (1);
}
