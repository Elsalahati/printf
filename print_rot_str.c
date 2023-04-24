#include "main.h"

int print_rot_str(va_list list)
{
	int pr_count = 0, i;
	char *str;

	str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
			pr_count += _putchar(str[i]);
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] <= 'm')
					pr_count += _putchar(str[i] + 13);
				else
					pr_count += _putchar(str[i] - 13);
			}

			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] <= 'M')
					pr_count += _putchar(str[i] + 13);
				else
					pr_count += _putchar(str[i] - 13);
			}
			else
			{
				pr_count += _putchar(str[i]);
			}
		}
	}
	return (pr_count);
}
