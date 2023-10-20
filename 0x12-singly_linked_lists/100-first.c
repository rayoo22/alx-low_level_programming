#include <stdio.h>
/**
 * execute_before_main - executes before the main function
 * Note: made possible by declaring "__attribute__ ((constructor))"
*/
void __attribute__ ((constructor)) execute_before_main()
{
printf("You're beat! and yet, you must allow,");
printf("I bore my house upon my back!\n");
printf("(A tortoise, having pretty good sense");
printf("of a hare's nature, challenges one to a race.)");
}
