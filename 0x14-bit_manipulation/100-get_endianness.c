#include "main.h"

/**
 * get_endianness - checks multibyte data if is little or bbig endian
 * Return: the first value stored
*/
int get_endianness(void)
{
int n = 0x00000001;
char *c = (char *)&n;

return (c[0]);
}