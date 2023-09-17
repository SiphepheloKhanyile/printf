#include "main.h"
/**
  * print_char - function to print characters
  * @c: characters to be printed
  * Return: printed char
  */
int print_char(char c)
{
	return (write(1, &c, 1));
}
/**
  * print_string - function to print strings
  * @str: string to be printed
  * Return: printed string
  */
int print_string(const char *str)
{
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	return (write(1, str, len));
}
