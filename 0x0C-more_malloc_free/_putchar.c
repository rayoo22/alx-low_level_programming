#include <unistd.h>
/**
 * _putchar - writs the character c to stdout
 * @c: the character to print
 * Return: On success the 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
