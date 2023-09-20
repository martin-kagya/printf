#include "main.h"
/**
 * _printf - Receives the necessary arguments for printing
 * @format: the string containing the various parameters
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	int char_length;
	conver_t f_list[] = {
		{"s", string},
		{"c", print_char}
	};
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	char_length = format_receiver(format, f_list, list);
	va_end(list);
	return (char_length);
}
