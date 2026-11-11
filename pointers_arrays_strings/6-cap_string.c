#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Description: the separators of words are space, tabulation, new line,
 * and the characters , ; . ! ? " ( ) { }
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int cap;
	char sep[] = " \t\n,;.!?\"(){}";

	cap = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		cap = 0;
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i] == sep[j])
				cap = 1;
	}
	return (str);
}
