#include "main.h"

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
		if (format[i] == '%')
		{
			value = 0;
			i++;
			value = check(format[i], arg);

			if (value < 0)
				return (-1);
			num += value;
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
	}

	va_end(arg);
	return (num);
}
