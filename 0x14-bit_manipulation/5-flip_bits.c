#include "main.h"
/**
 * flip_bits - returns no. of bits to flip
 * @n: number 1
 * @m: number 2
 * Return: no. of bits to flip from one to another
*/
unsignedint flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int diff_bits = 0;
unsigned long int difference;

difference = n ^ m;

do
{
diff_bits += (difference & 1);
difference >>= 1;
}
while
{
(difference > 0);
}
return (diff_bits);
}