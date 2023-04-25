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
