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
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_xchar(str[i]);
	return (i);
}

/**
 * _ppercent - percentage function
 * @ls: list of arguments
 * Return: number of characters printed
 */
int _ppercent(__attribute__((unused))va_list ls)
{
	_xchar('%');
	return (1);
}
