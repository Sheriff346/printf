#include "main.h"

/**
 * get_size - size to cast
 * @format: Formatted string in which to print the arguments
 * @i: List of all arguments to be printed
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr = *i + 1;
	int size_of = 0;

	if (format[curr] == 'l')
		size_of = S_LONG;
	else if (format[curr] == 'h')
		size_of = S_SHORT;

	if (size_of == 0)
		*i = curr - 1;
	else
		*i = curr;

	return (size_of);
}
