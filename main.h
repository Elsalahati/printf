#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

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
int strLen(char *str);
int _putchar(char c);
int print_ch(va_list list);
int print_str(va_list list);
int print_int(va_list list);
int print_bin(va_list list);
int print_un(va_list list);
int print_oct(va_list list);
int print_hex(va_list list);
int print_hex_up(va_list list);
int print_hex_num(unsigned int n);
int print_exe_str(va_list list);
int print_ptr(va_list list);
int print_rev_str(va_list list);
int print_rot_str(va_list list);

#endif
