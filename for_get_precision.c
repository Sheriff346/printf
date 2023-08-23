#include "main.h"

/**
 * get_precision - To Calculates the prec.-printing
 * @format: Formatted string
 * @i: List of arguments to be printed.
 * @list: list of all arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int curr = *i + 1;
	int precise = -1;

	if (format[curr] != '.')
		return (precise);

	precise = 0;

	for (curr += 1; format[curr] != '\0'; curr++)
	{
		if (is_digit(format[curr]))
		{
			precise *= 10;
			precise += format[curr] - '0';
		}
		else if (format[curr] == '*')
		{
			curr++;
			precise = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr - 1;

	return (precise);
}
