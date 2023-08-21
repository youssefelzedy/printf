#include "main.h"

/**
 *print_rot13 -  prints the rot13'ed string.
 *@arg: arguments.
 *Return: Counter.
 */

int print_rot13(va_list arg)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char beta[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	char *str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(beta[j]);
				break;
			}
		}

		if (x == 53)
		{
			_putchar(str[i]);
		}
	}

	return (i);

}
