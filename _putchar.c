#include <unistd.h>
#include "main.h"

/**
 * _putchar - Print out a character
 * @c: Output character
 *
 * Return: Result
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
