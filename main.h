#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

#define UNUSED(x) (void)(x)

/* THE SIZE */
#define S_SHORT 1
#define S_LONG 2


/* THE FLAGS */
#define F_SPACE 16
#define F_PLUS 2
#define F_HASH 8
#define F_ZERO 4
#define F_MINUS 1

/**
 * struct fmt - Struct format
 *
 * @fn: The associated function.
 * @fmt: The format.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 * By William and Sheriff
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);

int to_handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/**THE FUNCTIONS**/
/* Funtions to print chars and strings */
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions For Printing Numbers */

int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/*Function for printing non-printable characters */

int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Function for printing the memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions for handling all other specifiers */
int in_get_flags(const char *format, int *i);

int to_get_width(const char *format, int *i, va_list list);

int we_get_precision(const char *format, int *i, va_list list);

int for_get_size(const char *format, int *i);

/*Function for printing string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function for printing strings in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* The width handler */
int to_handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);

int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);

int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);

int write_pointer(char buffer[], int ind, int length,
int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind, char buffer[],
int size, int flags, int width, int precision);

/***FOR UTILS***/
int is_printable(char);

int is_digit(char);

int append_hexa_code(char, char[], int);

long int convert_size_unsgnd(unsigned long int num, int size);

long int convert_size_number(long int num, int size);

#endif /**MAIN_H**/
