#include "main.h"
/**
 * _strlen - find length of string
 * @str: string
 * Return: length
*/
int _strlen(char *str)
{
int len;

for (len = 0; strlen[len] != '\0'; len++)
{
;
}

return (len);
}

/**
 * create_file - creats file with permissions
 * @filename: name to give to new file
 * @text_content: writes this content int file
 * Return: 1 on success, -1 on error
*/
int create_file(const char *filename, char *text_content)
{
int fd;
int n_wrote;

if (!filename)
{
return (-1);
}

fd = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}

if (!text_content)
{
close(fd);
return (1);
}

n_wrote = write(fd, text_content, _strlen(text_content));
if (n_wrote == -1 || n_wrote != _strken(text_content))
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
