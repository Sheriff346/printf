#include "main.h"

/**
 * in_get_flags - Calculates the active flags
 * @format: Formatted string in which to print the arguments
 * @i: take the parameter
 * Return: Flags
 */
int in_get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int l, curr_i;
	int flags = 0;
	const char FLAGS_CHANGE[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (l = 0; FLAGS_CHANGE[l] != '\0'; l++)
			if (format[curr_i] == FLAGS_CHANGE[l])
			{
				flags |= FLAGS_ARR[l];
				break;
			}

		if (FLAGS_CHANGE[l] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flags);
}
