#include "main.h"


/**
 * _printf - prints output according to format
 * @format: passed string
 * Return: number of prints
 */
int _printf(const char *format, ...)
{
	int i = 0, j, pr_count = 0;
	va_list list;
	fmt_t funs[] = {
		{"c", print_ch},
		{NULL, NULL}
	};
	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (funs[j].op != NULL)
			{
				if (format[i] == '%')
				{
					pr_count += _putchar('%');
					break;
				}

				else if (*(funs[j].op) == format[i])
				{
					pr_count += funs[j].f(list);
					break;
				}
				j++;
			}
		}
		else
		{
			pr_count += _putchar(format[i]);
		}
		i++;
	}

	va_end(list);
	return (pr_count);
}

