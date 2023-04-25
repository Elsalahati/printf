#include "main.h"

/**
 * print_ptr - print out pointer address
 * @list: given list
 * Return: number of prints
*/
int print_ptr(va_list list)
{
	void *ptr;
	char *str = "(nil)";
	unsigned long int cast;
	int pr_count = 0, i;

	ptr = va_arg(list, void*);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);

		return (i);
	}

	cast = (unsigned long int)ptr;

	pr_count += _putchar('0');
	pr_count += _putchar('x');
	pr_count += print_hex_num(cast);

	return (pr_count);
}
