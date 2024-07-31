#include "main.h"
/**
 * print_str - function prints a string
 * @str: the pointer to the string
 * Return: the fuction returns an int
 */
int print_str(char *str)
{
	int count = 0;

	for (; *str != '\0'; ++str)
	{
		print_char((int)*str);
		++count;
	}
	return (count);
}
