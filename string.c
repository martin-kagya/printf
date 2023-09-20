#include "main.h"
/**
 * string - function to print strings
 * @args: list of arguments passed
 * Return: returns the amount of characteers in the string
 */
int string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
