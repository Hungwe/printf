#include "main.h"
/**
 * _controlpf - to print format string
 * @format: characters
 * @fl: list of functions
 * @ls: list of arguments
 * Return: count of characters printed
 */
int _controlpf(const char *format, _opt fl[], va_list ls)
{
	int i, j, n, x = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fl[j].fopt != NULL; j++)
			{
				if (format[i + 1] == fl[j].fopt[0])
				{
					n = fl[j].fun(ls);
					if (n == -1)
						return (-1);
					x += n;
					break;
				}
			}
			if (fl[j].fopt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_xchar(format[i]);
					_xchar(format[i + 1]);
					x += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_xchar(format[i]);
			x++;
		}
	}
	return (x);
}
