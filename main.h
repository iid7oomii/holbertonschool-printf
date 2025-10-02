#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(va_list ap);
int print_binary(va_list ap);
int print_unsigned(va_list ap, char spec);
int print_pointer(va_list ap);

#endif
