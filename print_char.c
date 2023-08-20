#include "main.h"

/**
 *print_char - to print one charactar
 *@arg: taking v_list
 *Return: A total count of the characters printed.
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 *print_str - to print string charactar
 *@arg: taking v_list
 *Return: A total count of the characters printed.
 */

int print_str(va_list arg)
{
	char *str;
	int i = 0, length;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	length = _strlen(str);
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}

	return (length);
}

/**
 *print_per - to print % charactar
 *@arg: taking v_list
 *Return: A total count of the characters printed.
 */

int print_per(__attribute__((unused)) va_list arg)
{
	char ch = '%';

	_putchar(ch);
	return (1);
}

/**
 *get_size - get size of numbers' digits
 *@n: number
 *@b: base
 *Return: size
 */
int get_size(unsigned int n, int b)
{
	int size = 0;

	while (n)
	{
		size++;
		n /= b;
	}

	return (size);
}
