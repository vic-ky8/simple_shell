#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes out a character
 * @c: character to be written
 *
 * Return: void
 *
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
