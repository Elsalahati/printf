#include "main.h"

/**
 * print_str - prints strings type
 * @list: input list of arguments
 * Return: total number of strings (words)
 **/

int print_str(va_list list)
{
	char *strptr;

	while (*strptr != '\0')
	{
		return (_putchar(va_arg(list, char *)));
		strptr++;
	}
}
