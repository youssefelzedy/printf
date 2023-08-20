#include "main.h"

/**
 * check_flags - checks flags
 * @f: flag
 * @f2: format
 *
 * Return: void
 */

int check_flags(char f, char f2)
{
	if (f == '+')
	{
		_putchar('+');
		return (1);
	}
	if (f == ' ')
	{
		_putchar(' ');
		return (1);
	}
	if (f == '#')
	{
		_putchar('0');
		if (f2 == 'x')
			_putchar('x');
		if (f2 == 'X')
			_putchar('X');
		return (1);
	}
	return (0);
}

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, value, num;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	num = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num++;
		}
		else
		{
			value = 0;
			i++;
			if (check_flags(format[i], format[i + 1]))
			{
				value++;
				i++;
			}
			value = check(format[i], arg);
			if (value < 0)
				return (-1);
			num += value;
		}
	}

	va_end(arg);
	return (num);
}
