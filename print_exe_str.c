#include "main.h"

/**
 * print_exe_str - prints str and convert
 * un printable char into hex
 * @list: list given
 * Return: number of prints
*/
int print_exe_str(va_list list)
{
	char *str;
	int i, pr_count = 0;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			pr_count += 2;
			if (str[i] < 16)
			{
				_putchar('0');
				pr_count++;
			}
			pr_count = print_hex_num(str[i]);
		}
		else
		{
			_putchar(str[i]);
			pr_count++;
		}
	}
	return (pr_count);
}
