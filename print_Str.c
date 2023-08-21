/**
 *print_str_cap - to print string charactar
 *@arg: taking v_list
 *Return: A total count of the characters printed.
 */

int print_str_cap(va_list arg)
{
	char *str;
	int i = 0, length, nm;
	int tmp = 0;

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

			tmp = str[i];
			nm += nm + print_hex_unsigned(tmp);
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
