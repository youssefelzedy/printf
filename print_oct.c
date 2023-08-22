#include "main.h"

/**
 * print_octal - prints octal numbers
 * @arg: the argument of the integer function.
 * @flag: flag 1 or 2 or 3 or 4 or 5.
 * Return: A total count of the characters printed.
 */

int print_octal(va_list arg, int flag)
{
	int cntr = 0, i, t = 0;
	int *oct;
	unsigned int num = va_arg(arg, unsigned int), tmp = num;

	if (flag == 5)
	{
		if (num != 0)
		{
			_putchar('0');
			t = 1;
		}
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 8);
	oct = malloc(cntr * sizeof(int));
	if (oct == NULL)
		return (-1);
	if (oct)
	{
		for (i = 0; i < cntr; i++)
		{
			oct[i] = tmp % 8;
			tmp /= 8;
		}
		for (i = cntr - 1; i >= 0; i--)
		{
			_putchar(oct[i] + '0');
		}
		free(oct);
		cntr += t;
		return (cntr);
	}

	return (0);
}
