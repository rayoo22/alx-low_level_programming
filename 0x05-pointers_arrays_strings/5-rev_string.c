#include "main.h"
/**
 * rev_string - main entry point
 * @s: variable in use
 * Description: functions that reverses a string
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;
	char rev = s[0];

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
