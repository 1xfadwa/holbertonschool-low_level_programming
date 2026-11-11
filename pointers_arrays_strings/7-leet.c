#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Description: a and A become 4, e and E become 3, o and O become 0,
 * t and T become 7, l and L become 1
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i;
	int j;
	char from[] = "aAeEoOtTlL";
	char to[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; from[j] != '\0'; j++)
			if (s[i] == from[j])
				s[i] = to[j];
	return (s);
}
