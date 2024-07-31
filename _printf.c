#include "main.h"
/**
 * _printf - function mimics the actual printf
 * @format: function takes on a format string argument
 * Return: function returns an int of the characters
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list ap;

	va_start(ap, format);

	for (; *format != '\0'; ++format)
	{
		if (*format == '%')
		{
			count += print_format(*(++format), ap);
		}
		else
			count += write(1, format, 1);
	}
	va_end(ap);
	return (count);
}
