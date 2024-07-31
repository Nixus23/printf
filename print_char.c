#include "main.h"
/**
 * print_char - function writes a character to the output
 * @c: function takes a character argument
 * Return: function returns an int
 */
int print_char(int c)
{
	return (write(1, &c, 1));
}
