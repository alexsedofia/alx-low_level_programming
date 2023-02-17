#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ls;

	for (ls = 'z'; ls >= 'a'; ls--)
		putchar(ls);

	putchar('\n');

	return (0);
}
