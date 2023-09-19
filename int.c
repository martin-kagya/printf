#include "main.h"
#include <stdio.h>
/**
 * handler - function to handle format specifiers
 * _printf - function which prints integers
 * @args: list of arguments in a variadic function
 * @char_count: character count pointer
 * @f: letter to represent format specifier in handler
 * @format: format specifier with the printf function
 * Return: -1 when met with error and char count when success
 */

void handle(va_list args, int *char_count, const char *f)
{
	switch (*f)
	{
		case '%':
		{
			write(1, f, 1);
			(*char_count)++;
		} break;
		case 'i':
		{
			char buffer[80];
			int length = sprintf(buffer, "%i", va_arg(args, int));

			write(1, buffer, length);
			(*char_count)++;
		} break;
		case 'd':
		{
			char buffer[80];
			int length = sprintf(buffer, "%d", va_arg(args, int));

			write(1, buffer, length);
		} break;
	}
}
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			counter++;
		}
		else
		{
			format++;
			handle(args, &counter, format);
		}
		format++;
	}
	return (counter);
}
