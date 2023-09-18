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

/**
  * handle_int - Function to handle 'd' and 'i'
  * @args: arguments
  * Return: printed string
  */
int handle_int(va_list args)
{
	char buffer[20];
	int i = 0;
	int is_negative = 0;
	int num = va_arg(args, int);
	int len;
	int j;

	if (num == INT_MIN)
	{
		return (print_string("-2147483648"));
	}
	/**Handle Negative numbers**/
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	/**Convert the number to a string in reverse order**/
	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);
	/**Add the negative sign if necessary**/
	if (is_negative)
	{
		buffer[i++] = '-';
	}
	/**Reverse String**/
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		char temp = buffer[j];

		buffer[j] = buffer[len - j - 1];
		buffer[len - j - 1] = temp;
	}
	return (print_string(buffer));
}
