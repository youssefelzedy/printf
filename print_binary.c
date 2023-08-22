#include "main.h"

/**
 * print_binary - to print binary number.
 * @arg: taking variadic function.
 * Return: A total count of the characters printed.
 */

int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int i, cntr;
	char *binary;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	cntr = get_size(num, 2);
	binary = malloc(sizeof(char) * (cntr + 1));

	if (binary == NULL)
		return (-1);

	for (i = cntr - 1; i >= 0; i--)
	{
		binary[i] = (num & 1) + '0';
		num /= 2;
	}

	for (i = 0; i < cntr; i++)
	{
		_putchar(binary[i]);
	}

	free(binary);
	return (cntr);
}

/**
 * print_hex - prints an hexgecimal number.
 * @arg: the argument of the print_hex function.
 * @flag: flag 1 or 2 or 3 or 4 or 5.
 * Return: A total count of the characters printed.
 */

int print_hex(va_list arg, int flag)
{
	long int i, *hex, cntr = 0, t = 0;
	unsigned long int num = va_arg(arg, unsigned long int), temp = num;

	if (flag == 3)
	{
		if (num != 0)
		{
			_putchar('0');
			_putchar('x');
			t = 2;
		}
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 16);
	hex = malloc(cntr * sizeof(long int));
	if (hex == NULL)
		return (-1);
	if (hex)
	{
		for (i = 0; i < cntr; i++)
		{
			hex[i] = temp % 16;
			temp /= 16;
		}
		for (i = cntr - 1; i >= 0; i--)
		{
			if (hex[i] > 9)
				hex[i] = hex[i] + 39;
			_putchar(hex[i] + '0');
		}
		free(hex);
		cntr += t;
		return (cntr);
	}
	return (0);

}

/**
 * print_HEX - prints an hexgecimal number.
 * @arg: the argument of the print_HEX function.
 * @flag: flag 1 or 2 or 3 or 4 or 5.
 * Return: A total count of the characters printed.
 */

int print_HEX(va_list arg, int flag)
{
	long int i, t = 0, *HEX, cntr = 0;
	unsigned long int num = va_arg(arg, unsigned long int), temp = num;

	if (flag == 4)
	{
		if (num != 0)
		{
			_putchar('0');
			_putchar('X');
			t = 2;
		}
	}
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
		cntr += t;
		return (cntr);
	}
	return (0);

}

/**
 * print_HEX2 - prints an hexgecimal number.
 * @num: the argument of the print_HEX2 function.
 * Return: A total count of the characters printed.
 */

int print_HEX2(unsigned int num)
{
	int i;
	int *HEX;
	int cntr = 0;
	unsigned int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	cntr = get_size(num, 16);
	HEX = malloc(cntr * sizeof(int));
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
