#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct fmt_op - function to check for formats
 * @op: specifier type
 * @f: The print function to use
 */
typedef struct fmt_op
{
	char *op;
	int (*f)();
} fmt_t;

int _printf(const char *format, ...);
int listLen(char *str);
int _putchar(char c);
int print_ch(va_list list);
int print_str(va_list, list);
int print_int(va_list list);
int print_un(va_list list);
int print_oct(va_list list);

#endif
