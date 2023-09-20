#include "main.h"
/**
  * handle_custom_string - for 'S' specifier (with non-printable characters)
  * @args: arguments
  * Return: printed custom string
  */
int handle_custom_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int printed_chars = 0;

	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			printed_chars += print_char(*str);
		}
		else
		{
			char hex_code[3];

			printed_chars += print_char('\\');
			printed_chars += print_char('x');
			snprintf(hex_code, sizeof(hex_code), "%02X", *str);
			printed_chars += print_string(hex_code);
		}
		str++;
	}
	return (printed_chars);
}
