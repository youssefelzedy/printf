#include "main.h"

/**
 * print_int - to print print unsigned integer
 * @arg: the argument of the integer function.
 * @flag: flag 1 or 2 or 3 or 4 or 5.
 * Return: A total count of the characters printed.
 */

int print_int(va_list arg, int flag)
{
	int number = va_arg(arg, int), div, len;
	unsigned int num;

	div = 1;
	len = 0;

	if ((flag == 1 || flag == 6) && number >= 0)
	{
		len += _putchar('+');
	}
	if (flag == 2 && number >= 0)
	{
		len += _putchar(' ');
	}
	if (number < 0)
	{
		len += _putchar('-');
		num = -number;
	}
	else
		num = number;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_unsigned_integer - to print print unsigned integer
 * @arg: the argument of the unsigned integer function.
 * Return: A total count of the characters printed.
 */

int print_unsigned_integer(va_list arg)
{
	int div, len;
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	div = 1;
	len = 0;

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
