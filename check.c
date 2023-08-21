#include "main.h"

/**
 * check - Check if the type of the character
 * @ch: character
 * @arg: variadic function
 * @flag: flag.
 * Return: A total count of the characters printed
 */

int check(char ch, va_list arg, int flag)
{
	int num = 0;

	if ((ch == 'i' || ch == 'd') && (flag != 3 && flag != 4))
		num = print_int(arg, flag);
	else if (ch == 's')
		num = print_str(arg);
	else if (ch == 'c')
		num = print_char(arg);
	else if (ch == '%')
		num = print_per(arg);
	else if (ch == 'u')
		num = print_unsigned_integer(arg);
	else if (ch == 'b')
		num = print_binary(arg);
	else if (ch == 'o')
		num = print_octal(arg);
	else if (ch == 'x' || flag == 3)
		num = print_hex(arg, flag);
	else if (ch == 'X' || flag == 4)
		num = print_HEX(arg, flag);
	else if (ch == 'p')
		num = print_pointer(arg);
	else if (ch == 'r')
		num = print_rev(arg);
	else if (ch == 'R')
		num = print_rot13(arg);
	else
		num = p_unknown(ch);

	return (num);
}
