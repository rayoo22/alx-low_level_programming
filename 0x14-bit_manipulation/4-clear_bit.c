#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: position with binary no
 * Return: 1 if success, or -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int max_bits;
unsigned long int mask = 1;

max_bits = (sizeof(unsigned long int) * 8);
if (index > max_bits)
{
return (-1);
}
mask = ~(mask << index);
*n = (*n & mask);

return (1);
}
