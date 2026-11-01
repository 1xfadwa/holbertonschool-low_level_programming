#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
