#include "main.h"

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_integer(va_list list)
{
	int number_length;

	number_length = print_digit(list);
	return (number_length);
}


/**
 * print_digit - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int print_digit(va_list args)
{
	int n;
	int divisor;
	int len;
	unsigned int number;

	n  = va_arg(args, int);
	divisor = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		number = n * -1;
	}
	else
		number = n;

	for (; number / divisor > 9; )
		divisor *= 10;

	for (; divisor != 0; )
	{
		len += _putchar('0' + number / divisor);
		number %= divisor;
		divisor /= 10;
	}

	return (len);
}
