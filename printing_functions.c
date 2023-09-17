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

/**
  * handle_int - Function to handle printing numbers
  * @args: Arguments
  * Return: printed numbers
  */
int handle_int(va_list args)
{
	int num = va_arg(args, int);
	char num_str[20];
	int i = 0;
	int is_nagative = 0;
	int len = 0;
	int j;
	/**Handle negative numbers**/
	if (num < 0)
	{
		is_nagative = 1;
		num = -num;
	}
	/**Convert the number to a string in reverse order**/
	do {
		num_str[i++] = num % 10 + '0';

		num /= 10;
	} while (num > 0);
	/**Add negative sign if necessary**/
	if (is_nagative)
	{
		num_str[i++] = '-';
	}
	/**Reverse the string**/
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		char temp = num_str[j];

		num_str[j] = num_str[len - j - 1];
		num_str[len - j - 1] = temp;
	}
	return (print_string(num_str));
}
