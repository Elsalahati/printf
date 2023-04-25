#include "main.h"


/**
 * print_rev_str - prints out
 * reversed string
 * @list: given list
 * Return: number of prints
*/
int print_rev_str(va_list list)
{
	int pr_count = 0, i, len;
	char *str;

	str = va_arg(list, char*);

	if (str == NULL)
		str = "(null)";

	for (len = 0; str[len] != '\0'; len++)
	;

	for (i = len - 1; str[i] != '\0'; i--)
		pr_count += _putchar(str[i]);

	return (pr_count);
}
