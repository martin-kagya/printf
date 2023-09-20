#include "main.h"
/**
 * _putchar - function to print characters
 * @c: character to print
 * Return: 1 upon succes and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string to the standard output
 * @str. pointer to a string to b e printed
 * Return: number of characters written to stdout
 */
int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
