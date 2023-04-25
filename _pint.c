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
 * Return: 1
 */

int _pint(va_list ls)
{
int num;
num = va_arg(ls, int);
recur(num);
return (1);
}

/**
 * recur - Recursive function
 * @num: Input number
 *
 */

void recur(int num)
{
if (num < 0)
{
_xchar('-');
num = num * -1;
}
if (num == 0)
{
_xchar('0');
}
else if (num / 10)
{
recur(num / 10);
}
_xchar(num % 10 + '0');
}
