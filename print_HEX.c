#include "main.h"

/**
 *print_HEX - prints an hexgecimal number.
 *@arg: the argument of the print_hex function.
 *Return: counter.
 */

int print_HEX(va_list arg)
{
	long int i;
	long int *HEX;
	long int cntr = 0;
	unsigned long int num = va_arg(arg, unsigned long int);
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	cntr = get_size(num, 16);
	HEX = malloc(cntr * sizeof(long int));
	if (HEX == NULL)
		return (-1);
	if (HEX)
	{
		for (i = 0; i < cntr; i++)
		{
			HEX[i] = temp % 16;
			temp /= 16;
		}

		for (i = cntr - 1; i >= 0; i--)
		{
			if (HEX[i] > 9)
				HEX[i] = HEX[i] + 7;
			_putchar(HEX[i] + '0');
		}

		free(HEX);
		return (cntr);
	}

	return (0);

}

/**
 *print_hex_unsigned - prints an hexgecimal number.
 *@num: the argument of the print_hex function.
 *Return: counter.
 */

int print_hex_unsigned(unsigned int num)
{
	long int i;
	long int *HEX;
	long int cntr = 0;
	unsigned long int temp = num;

	cntr = get_size(num, 16);
	HEX = malloc(cntr * sizeof(long int));
	if (HEX)
	{
		for (i = 0; i < cntr; i++)
		{
			HEX[i] = temp % 16;
			temp /= 16;
		}

		for (i = cntr - 1; i >= 0; i--)
		{
			if (HEX[i] > 9)
				HEX[i] = HEX[i] + 7;
			_putchar(HEX[i] + '0');
		}

		free(HEX);
		return (cntr);
	}

	return (0);
}
