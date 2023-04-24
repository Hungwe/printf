#include "main.h"
/**
 * _xchar - same function as putchar
 * @c: character to be output
 * Return: result
 */
int _xchar(char c)
{
	return (write(1, &c, 1));
}
