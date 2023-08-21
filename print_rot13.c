#include "main.h"

/**
 *print_rot13 - prints the rot13'ed string.
 *@arg: rguments.
 *Return: Counter
 */
int print_rot13(va_list arg)
{
	int i, j;
	int counter = 0;
	int k = 0;
	char *str = va_arg(arg, char *);
	char s[] = { "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	char u[] = { "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM" };

	if (str == NULL)
		str = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (str[i] == s[j])
			{
				_putchar(u[j]);
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
