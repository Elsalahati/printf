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
	unsigned int cast;
	n = va_arg(list, int);

	if (n < 0)
	{
		pr_count += _putchar('-');
		n *= -1;
	}

	cast = n;

	while (cast / exp > 9)
		exp *= 10;

	while (exp != 0)
	{
		pr_count += _putchar((cast / exp) + '0');
		cast %= exp;
		exp /= 10;
	}

	return (pr_count);
}

