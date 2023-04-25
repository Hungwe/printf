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
		{"%", _ppercent},
		{"d", _pdeci},
		{"i", _pint},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(al, format);
	x = _controlpf(format, fl, al);
	va_end(al);
	return (x);
}
