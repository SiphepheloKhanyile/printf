#include "main.h"
#include <stdint.h> /**for int32_t, uint32_t**/
/**
  * handle_unsigned_int - Function to handle unsigned int 'u'
  * @args: arguments
  * Return: printed unsigned int
  */
int handle_unsigned_int(va_list args)
{
	uint32_t num = va_arg(args, uint32_t); /**Use uint32_t for portability**/
	char buffer[12]; /**Large enough to hold UINT_MAX as a string**/
	int len, j, i = 0;

	/**Convert the number to a string in reverse order**/
	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);
	/**Reverse the string**/
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		char temp = buffer[j];

		buffer[j] = buffer[len - j - 1];
		buffer[len - j - 1] = temp;
	}
	return (print_string(buffer));
}
/**
  * handle_octal - function to handle octal representation 'o'
  * @args: arguments
  * Return: printed octal
  */
int handle_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int len, i, index = 0;

	/**Convert the number to octal in reverse order**/
	do {
		buffer[index++] = (num % 8) + '0';
		num /= 8;
	} while (num > 0);
	/**Reverse the string**/
	len = index;
	for (i = 0; i < len / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = temp;
	}
	return (print_string(buffer));
}
/**
  * handle_hex_lower - Function to handle 'x' (hexadecimal representation)
  * @args: arguments
  * Return: printed args
  */
int handle_hex_lower(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int index = 0;
	char buffer[12];
	int len, i;

	if (num == 0)
	{
		return (print_char('0'));
	}
	/**Convert the number to hexadecimal in reverse order**/
	do {
		int digit = num % 16;

		if (digit < 10)
		{
			buffer[index++] = digit + '0';
		}
		else
		{
			buffer[index++] = digit - 10 + 'a';
		}
		num /= 16;
	} while (num > 0);
	len = index;
	for (i = 0; i < len / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = temp;
	}
	return (print_string(buffer));
}
/**
  * handle_hex_upper - Function to handle 'X'uppercase hexadecimal repre)
  * @args: arguments
  * Return: Printed upper hex
  */
int handle_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int index = 0;
	int i, len;

	do {
		int digit = num % 16;

		if (digit < 10)
		{
			buffer[index++] = digit + '0';
		}
		else
		{
			buffer[index++] = digit - 10 + 'A';
		}
		num /= 16;
	} while (num > 0);
	len = index;
	for (i = 0; i < len / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = temp;
	}
	return (print_string(buffer));
}
