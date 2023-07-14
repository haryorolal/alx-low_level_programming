#include <ctype.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(tolower(alpha));

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(toupper(alpha));
		}
	}
	putchar('\n');
	return (0);
}
