#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_format(char specifier, va_list ap);
int print_char(int c);
int print_str(char *str);
int print_digit(long n, int base);


#endif
