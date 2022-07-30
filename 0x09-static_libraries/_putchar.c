#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 *
 * Return: on success 1.
 * on err0, -1 is returned, and errno is set appropriately.
 */
int _putchar(chat c)
{
	return (write(1, &c, 1));
}
