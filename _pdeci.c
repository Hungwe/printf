#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _pdeci - Print out decimal number
 * @ls: Variable list
 *
 * Return: 1
 */

int _pdeci(va_list ls)
{
int d;
d = va_arg(ls, int);
recur(d);
return (1);
}

/**
 * recur - Recurse to print out decimal number
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
else if (num == 0)
{
_xchar('0');
}
else if (num / 10)
{
recur(num / 10);
}
_xchar(num % 10 + '0');
}
