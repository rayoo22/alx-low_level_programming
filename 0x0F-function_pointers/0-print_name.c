#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: the function pointer
 * Description: prints aname
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
