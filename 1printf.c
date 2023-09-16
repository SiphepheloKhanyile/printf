#include "main.h"
/**
  * print_char - Function to print a character
  * @c: character to be printed
  * Return: 1
  */
static int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
  * print_string - function to print a string
  * @string: string to be printed
  * Return: length of string
  */
static int print_string(const char *string)
{
	size_t length = 0;

	while (string[length])
	{
		length++;
	}
	write(1, string, length);
	return (length);
}

/**
  * _printf - function to produce output according to format
  * @format: character string
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int chars_printed = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			case 'c':
			{
			char c = va_arg(args, int);

			chars_printed += print_char(c);
			break;
			}
			case 's':
			{
			const char *string = va_arg(args, const char *);

			if (string)
			{
				chars_printed += print_string(string);
			}
			break;
			}
			case '%':
			{
			chars_printed += print_char('%');
			break;
			}
			default:
			{
			chars_printed += print_char('%');
			chars_printed += print_char(*format);
			break;
			}
		}
	}
	va_end(args);
	return (chars_printed);
}
