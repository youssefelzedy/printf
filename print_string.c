#include "main.h"

/**
 * print_str - to print string charactar
 * @arg: the argument of the integer function.
 * Return: A total count of the characters printed.
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

/**
 * print_rev - prints an reversed string.
 * @arg: the argument of the integer function..
 * Return: A total count of the characters printed.
 */
int print_rev(va_list arg)
{
	char *s = va_arg(arg, char *);
	int j = 0;
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (j);

}

/**
 *print_rot13 - prints the rot13'ed string.
 *@arg: the argument of the integer function..
 *Return: A total count of the characters printed.
 */
int print_rot13(va_list arg)
{
	int i, j;
	int counter = 0;
	int k = 0;
	char *str = va_arg(arg, char *);
	char alpha[] = { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	char beta[] = { "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM" };

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}

		if (!k)
		{
			_putchar(str[i]);
			counter++;
		}
	}

	return (counter);
}
