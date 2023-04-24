#include "main.h"
/**
 * _printf - prints out like printf function
 * @format: parameter type
 * Return: result
 */
int _printf(const char *format, ...)
{
	va_list al;
	int x;

	_opt fl[] = {
		{"c", _pchar},
		{"s", _pstring},
		{"i", _pinteger},
		{"%", _ppercent},
		{NULL, NULL}
	};

	va_start(al, format);
	x = _controlpf(format, fl, al);
	va_end(al);
	return (x);
}
