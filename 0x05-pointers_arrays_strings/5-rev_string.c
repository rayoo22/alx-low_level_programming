#include "main.h"
/**
 * rev_string - main entry point
 * @s: variable in use
 * Description: functions that reverses a string
 */
void rev_string(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
