#include "main.h"

/**
 * _strncpy - copies a string, working exactly like strncpy
 * @dest: the buffer to copy to
 * @src: the string to copy
 * @n: the number of bytes to write into dest
 *
 * Description: if src is shorter than n, the rest of dest is filled with
 * null bytes. If src is n bytes or longer, dest is not null-terminated
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
