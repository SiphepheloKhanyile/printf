#include "main.h"
/**
  * _printf - function that produces output according to a format.
  * @format: character string with format if any
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			printed_chars += print_char(*format);
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					printed_chars += handle_char(args);
					break;
				case 's':
					printed_chars += handle_string(args);
					break;
				case '%':
					printed_chars += handle_percent();
					break;
				default:
					printed_chars += print_char('%');
					printed_chars += print_char(*format);
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
