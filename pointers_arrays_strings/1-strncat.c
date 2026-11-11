#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the string to append to
 * @src: the string to append
 * @n: the maximum number of bytes to take from src
 *
 * Description: src does not need to be null-terminated if it has n or more
 * bytes. A terminating null byte is always added at the end of dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
