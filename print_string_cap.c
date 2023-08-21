#include "main.h"

/**
 *_print_str_cap - print exclusuives string.
 *Non printable characters (0 < ASCII value < 32 or >= 127)
 *are printed this way:\x followed by the ASCII code value
 *in hexadecimal (upper case - always 2 characters)
 *@arg: argumen t.
 *Return: the length of the string.
 */

int _print_str_cap(va_list arg)
{
	char *str;
	int i = 0, length, nm, tmp = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (0);

	length = _strlen(str);
	nm = 0;
	while (i < length)
	{
		if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			nm += 2;

			if (str[i] < 16)
			{
				_putchar('0');
				nm++;
			}

			tmp = print_HEX2(str[i]);
			nm = nm + tmp;
		}
		else
		{
			_putchar(str[i]);
			nm++;
		}

		i++;
	}

	return (nm);
}
