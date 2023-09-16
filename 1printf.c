#include "main.h"
/**
  * _printf - function to produce output according to format
  * @format: character string
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			/**for normal characters**/
			putchar(*format);
			printed_chars++;
		}
		else
		{
			/**if we encounter format specifier**/
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);
					putchar(c);
					printed_chars++;
					break;
				}
				case 's':
				{
					const char *string = va_arg(args, const char *);
					if (string)
					{
						while(*string)
						{
							putchar(*string);
							string++;
							printed_chars++;
						}
					}
					break;
				}
				case '%':
				{
					putchar('%');
					printed_chars++;
					break;
				}
				default:
				{
					putchar('%');
					putchar(*format);
					printed_chars += 2;
				}
			}
		}
		format++;
		
	}
	va_end(args);
	return (printed_chars);
}

