#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 *
 *
 *
 **/

int _printf(const char *format, ...)
{
	int p = 0;
	va_list conv_specifiers;

	va_start(conv_specifiers, num_args);
	
	while (format)
	{
		switch (p)
		{
			case 'c':
			{
				printf();
				break;
			}
			case 's':
			{


			}
			_printf(va);
			break;
		}
		
	}


}
