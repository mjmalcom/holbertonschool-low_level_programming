#include <stdio.h>
/**
 *main - prints alphabet upper and lower case
 *
 * Return: 0
 */
int main(void)
{
	char i;
	char x;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

