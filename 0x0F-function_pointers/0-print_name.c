#include <stdlib.h>

/**
 * print_name - executes a function
 * @name: name to print
 * @f: function to execute
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
