#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/*Main Fnction*/
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int _print_str_cap(va_list arg);
int print_rev(va_list arg);
int print_rot13(va_list arg);
int print_per(va_list arg);
int print_int(va_list arg, int flag);
int print_unsigned_integer(va_list arg);
int print_pointer(va_list arg);
int print_binary(va_list arg);
int print_hex(va_list arg, int flag);
int print_HEX(va_list arg, int flag);
int print_HEX2(unsigned int num);
int print_hex_to_pointer(unsigned long int num);
int print_octal(va_list arg, int flag);

/*Helper Fnction*/
int _strlen(char *s);
int p_unknown(char ch);
int check_flags(char f, char f2);
int _putchar(char c);
int get_size(unsigned int n, int b);
int check(char ch, va_list arg, int flag);

#endif
