#include "main.h"

/**
 * check - Check if the type of the character
 * @ch: character
 * @arg: variadic function
 * Return: A total count of the characters printed
 */

int check(char ch, va_list arg)
{
	int num = 0;

	if (ch == 'i' || ch == 'd')
		num = print_int(arg);
	else if (ch == 's')
		num = print_str(arg);
	else if (ch == 'S')
		num = print_str_cap(arg);
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
	else if (ch == 'x')
		num = print_hex(arg);
	else if (ch == 'X')
		num = print_HEX(arg);
	else if (ch == 'p')
		num = print_pointer(arg);
	else if (ch == 'r')
		num = print_rev(arg);
	else
		num = p_unknown(ch);

	return (num);
}
