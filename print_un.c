#include "main.h"


/**
 * print_un - prints out a given unsigned number
 * using _putchar function
 * @list: list given
 * Return: number of prints
*/
int print_un(va_list list)
{
	unsigned int n;
	int exp = 1, pr_count = 0;

	n = va_arg(list, int);

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
