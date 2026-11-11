#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string pointer to be updated
 * @to: pointer to the target string
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
