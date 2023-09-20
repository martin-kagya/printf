#include "main.h"
/**
 * print_char - function to print char
 * @args: argument lists
 * Return: the amount of chars printed
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
