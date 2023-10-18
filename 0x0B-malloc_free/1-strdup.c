#include <stdlib.h>
#include "main.h"

/**
 * _strdup -returns a pointer to the space allocated
 * containing the copy of the string given
 * @str: string to be duplicated
 * Return: a pointer to the mem location where the duplicate is stored
 */
char *_strdup(char *str)
{
char *duplicate_str;
int i = 0, len = 0;

if (str == NULL)
{
return (NULL);
}

while (*(str + i))
{
len++, i++;
}
len++;

duplicate_str = malloc(sizeof(char) * len);

if (duplicate_str == NULL)
{
return (NULL);
}
i = 0;

while (i < len)
{
*(duplicate_str + i) = *(str + i);
i++;
}

return (duplicate_str);
}
