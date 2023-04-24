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
		for (i = 0; str[i] != '\0'; i++)
		{
			printf("%c\n", str[len - i]);
			tmp = str[len - i];	
			printf("test");
			str[len - i] = str[i];
			printf("test");
			str[i] = tmp;
		}
	}

	return (pr_count);
}
