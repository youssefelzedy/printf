#include "main.h"

/**
 * print_octal - prints octal numbers
 * @arg: argument list
 *
 * Return: number of printed charactes
 */

int print_octal(va_list arg)
{
	unsigned int len, powten, j, digit, n, num;
	int count = 0;

	n = va_arg(arg, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}