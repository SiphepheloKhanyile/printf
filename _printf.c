#include "main.h"
/**
  * _printf - function that produces output according to a format.
  * @format: character string with format if any
  * Return: number of characters printed
  */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
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
			if (*format == '\0')
			{
				break;
			}
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
				case 'd':
				case 'i':
					printed_chars += handle_int(args);
					break;
				case 'b':
					printed_chars += handle_binary(args);
					break;
				case 'u':
					printed_chars += handle_unsigned_int(args);
					break;
				case 'o':
					printed_chars += handle_octal(args);
					break;
				case 'x':
					printed_chars += handle_hex_lower(args);
					break;
				case 'X':
					printed_chars += handle_hex_upper(args);
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
