#include "main.h"
#include <stdio.h>
/**
 * handler: function to handle the specifiers
 * @f: format for handlers
 * @args: variadic list
 * _printf: function to mimic printf function
 * Return: returns -1 when met with error
 * and char_count after proper functioning
 */
void handler(va_list args, int *char_count, const char *f)
{
	switch (*f)
	{
		case '%':
			write(1, f, 1);
			(*char_count)++;
			break;
		case 's':
		{
			char *s = va_arg(args, char*);
			int length = 0;

			while (s[length])
			{
				length++;
			}
			write(1, s, length);
			(*char_count) += length;
		}
			break;
		default:
			break;
	}
}
int _printf(const char *format, ...)
{
	int count = 0;
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
			count++;
		}
		else
		{
			format++;
			handler(args, &count, format);
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
