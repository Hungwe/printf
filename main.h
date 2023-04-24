#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdio.h>
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

int _printf(const char *format, ...);
int _pchar(va_list ls);
int _pstring(va_list ls);
int _pinteger(va_list ls);
int _ppercent(va_list ls);
int _controlpf(const char *format, _opt fl[], va_list ls);
int _xchar(char c);

#endif
