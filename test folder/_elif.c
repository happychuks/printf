#include "main.h"

/**
 * _elif - printf
 * @format: The format string
 * @args: character set
 * Return: The number of characters printed
 */

int _elif(const char *format, va_list args)
{
	int printed_chars;

	printed_chars = 0;
	while (*format)
	{/* CHeck if the current character is a format specifier */
		if (*format == '%')
		{
			format++; /* Move to the next character after '%' */
			if (*format == '\0') /* Check if '%' is the last character in the format */
				break;
			if (*format == '%') /* Handle the case of '%%' (literal '%') */
			{
				_putchar('%');
				printed_chars++;
			}
			else
			{ /*Calls teh _elif_helper function to handle other format specifiers*/
				printed_chars += _elif_helper(*format, args);
			}
		}
		else
		{/* If not a format specifier, print the character as is*/
			_putchar(*format);
			printed_chars++;
		}
		format++; /*Move to the next character in the format string*/

	}
	return (printed_chars); /* Return the total number of characters printed*/
}
