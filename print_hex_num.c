#include "main.h"


/**
 * print_hex_num - covert given number to
 * hex and print it using _putchar function
 * @n: number given
 * Return: number of prints
*/
int print_hex_num(unsigned int n)
{
	int *arr;
	int pr_count, i;
	unsigned int a;

	a = n;
	pr_count = 0;

	while (a / 16)
	{
		pr_count++;
		a /= 16;
	}
	pr_count++;

	arr = (int *)malloc(sizeof(int) * pr_count);

	if (arr == NULL)
	{
		free(arr);
		return (0);
	}

	for (i = 0; i < pr_count; i++)
	{
		arr[i] = n % 16;
		n /= 16;
	}

	for (i = pr_count - 1; i >= 0; i--)
	{
		if (arr[i] <= 9)
			_putchar(arr[i] + '0');
		else
			_putchar((arr[i] % 10) + 'a');
	}

	free(arr);
	return (pr_count);
}
