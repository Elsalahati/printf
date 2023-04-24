#include "main.h"

/**
 * print_str - prints strings type
 * @list: input list of arguments
 * Return: total number of strings (words)
 **/

int print_str(va_list list)
{
	int pr_count = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}
	
	while (str[pr_count] != '\0')
		pr_count += _putchar(str[pr_count]);

	return (pr_count);
}
