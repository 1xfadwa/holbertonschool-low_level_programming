#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to append to
 * @src: the string to append
 *
 * Description: overwrites the terminating null byte of dest, then adds a
 * new terminating null byte at the end
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
