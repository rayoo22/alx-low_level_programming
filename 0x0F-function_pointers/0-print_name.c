#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: the function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f = &print_name;

	f(name);

	return 0;
}
