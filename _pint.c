#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _pint - Print integer
 * @ls: List of variables
 *
 * Return: Result
 */

int _pint(va_list ls)
{
int n;
unsigned int nm;
int x;
int ln;

x = 1;
ln = 0;
n = va_arg(ls, int);
if (n < 0)
{
ln = ln + _xchar('-');
nm = n * -1;
}
else
{
nm = n;
}
while (nm / x > 9)
{
x = x * 10;
}
while (nm != 0)
{
ln = ln + _xchar('0' + nm / x);
nm = nm % x;
x = x / 10;
}
return (ln);
}
