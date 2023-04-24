#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct opt - structure of symbols and functions
 * @fopt: the operator
 * @fun: associated function
 */
struct opt
{
	char *fopt;
	int (*fun)(va_list);
};
typedef struct opt _opt;

int _controlpf(const char *format, _opt f1[], va_list ls);
int _printf(const char *format, ...);
int _xchar(char c);
int _pchar(va_list ls);
int _pstring(va_list ls);
int _ppercent(va_list ls);

#endif
