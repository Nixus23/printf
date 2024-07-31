#include "main.h"
/**
 * print_format - function handles printf specifiers
 * @specifier: the present specifier argument present
 * @ap: argument pointer that iterates through the specifiers
 * Return: the function returns an int
 */
int print_format(char specifier, va_list ap)
{
	unsigned int count = 0;

	if (specifier == 'c')
	{
		count += print_char(va_arg(ap, int));
	}
	else if (specifier == '%')
	{
		char p = 37;

		count += write(1, &p, 1);
	}
	else if (specifier == 's')
	{
		count += print_str(va_arg(ap, char *));
	}
	else if (specifier == 'd' || 'i')
	{
		count += print_digit((long)(va_arg(ap, int)), 10);
	}
	else
	{
		count += write(1, &specifier, 1);
	}
	return (count);
}
