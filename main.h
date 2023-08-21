#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/*Main Fnction*/
int _printf(const char *format, ...);
int _putchar(char c);
int check(char ch, va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_STR(va_list arg);
int print_per(va_list arg);
int print_int(va_list arg);
int print_unsigned_integer(va_list arg);
int print_pointer(va_list arg);
int print_binary(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_hex_to_pointer(unsigned long int num);
int print_HEX_unsigned(unsigned int num);
int print_octal(va_list arg);
int get_size(unsigned int n, int b);
int _strlen(char *s);
int p_unknown(char ch);





#endif
