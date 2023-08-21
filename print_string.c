#include "main.h"

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
