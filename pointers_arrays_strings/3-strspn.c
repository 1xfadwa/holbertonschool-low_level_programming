#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j, found;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
			count++;
		else
			break;
	}

	return (count);
}
