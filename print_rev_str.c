#include "main.h"

int print_rev_str(va_list list)
{
	int pr_count = 0, i, len;
	char *str;
	char tmp;

	str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
			pr_count += _putchar(str[i]);
	}

	else
	{
		len = strLen(str) - 1;
		for (i = len; str[i] != '\0'; i--)
			_putchar(str[i]);
	}

	return (pr_count);
}
