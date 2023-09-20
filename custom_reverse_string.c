#include "main.h"
#include <string.h>
/**
  * handle_custom_reverse_string - prints the reversed string 'r'
  * @args: string
  * Return: printed args
  */
int handle_custom_reverse_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int length = strlen(str);
	int printed_chars = 0, i;

	for (i = length - 1; i >= 0; i--)
	{
		printed_chars += print_char(str[i]);
	}
	return (printed_chars);
}
