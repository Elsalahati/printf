#include "main.h"


/**
 * print_int - prints out given number
 * using _putchar function
 * @list: list given
 * Return: number of prints
*/
int print_int(va_list list)
{
	int n, exp = 1, pr_count = 0;

	n = va_arg(list, int);

	if (n < 0)
	{
		pr_count += _putchar('-');
		n *= -1;
	}

	while (n / exp > 9)
		exp *= 10;

	while (exp != 0)
	{
		pr_count += _putchar((n / exp) + '0');
		n %= exp;
		exp /= 10;
	}

	return (pr_count);
}

