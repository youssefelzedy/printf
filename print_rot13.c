#include "main.h"

/**
 * print_rot13 -  prints the rot13'ed string.
 * @arg: arguments.
 * Return: Counter.
 */

int print_rot13(va_list arg)
{
	int i;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			if (str[i] > 109 || (str[i] > 77 && str[i] < 91))
			{
				str[i] -= 13;
				_putchar(str[i]);
			}
			else
			{
				str[i] += 13;
				_putchar(str[i]);
			}
		}
		else
			_putchar(str[i]);
		i++;
	}

	return (i);
}
