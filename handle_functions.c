#include "main.h"
/**
  * handle_percent - function to handle percent
  * Return: write '%' to std output
  */
int handle_percent(void)
{
	return (print_char('%'));
}

/**
  * handle_char - function to handle charcters
  * @args:character to be printed
  * Return: print character
  */
int handle_char(va_list args)
{
	char c = va_arg(args, int);

	return (print_char(c));
}

/**
  * handle_string - Function to handle strings
  * @args: string to be printed
  * Return: printed string else 0
  */
int handle_string(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (str)
	{
		size_t len = 0;

		while (str[len])
		{
			len++;
		}
		return (print_string(str));
	}
	return (0);
}
