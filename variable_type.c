#include "main.h"
/**
 * _pchar - character function
 * @ls: list of arguments
 * Return: number of characters printed
 */
int _pchar(va_list ls)
{
	_xchar(va_arg(ls, int));
	return (1);
}

/**
 * _pstring - string function
 * @ls: list of arguments
 * Return: number of characters printed
 */
int _pstring(va_list ls)
{
	int i;
	char *str;
	
	str = va_arg(ls, char *);
	for (i = 0; str[i] != '\0'; i++)
		_xchar(str[i]);
	return (i);
}

/**
 * _pinteger - integer function
 * @ls: list of arguments
 * Return: number of characters printed
 */
int _pinteger(va_list ls)
{
	int n, x = 1, ln = 0;
	unsigned int nm;

	n = va_arg(ls, int);
	if (n < 0)
	{
		ln += _xchar('-');
		nm = n * -1;
	}
	else
		nm = n;
	while(nm / x > 9)
		x *= 10;
	while(nm != 0)
	{
		ln += _xchar('0' + nm / x);
		nm % x;
		x /= 10;
	}
	return (ln);
}

/**
 * _ppercent - percentage function
 * @ls: list of arguments
 * Return: number of characters printed
 */
int _ppercent(va_list ls)
{
	_xchar('%');
	return (1);
}
