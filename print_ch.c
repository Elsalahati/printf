#include "main.h"

/**
 * print_ch - prints out given char
 * @list: list given
 * Return: number of char printed
 */
int print_ch(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

