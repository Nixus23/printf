#include "main.h"
/**
 * print_digit - function prints a digit from the specifier
 * @n: the int argument parameter
 * @base: the number base to represent (10)
 * Return: function returns an int of the character count
 */
int print_digit(long n, int base)
{
	int count = 0;
	char *symbols;

	symbols = "0123456789";

	if (n < 0)
	{
		print_char('-');
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit(n / base, base);
		return (count + print_digit(n % base, base));
	}
}
