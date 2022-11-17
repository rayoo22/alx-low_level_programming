#include "function_pointers.h"

/**
 * print_name - the main function
 * @name: a variable
 * @*f: a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	_putchar(name);

	f = &print_name;

	_putchar(f);
}
