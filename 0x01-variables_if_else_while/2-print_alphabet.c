#include <ctype.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Alpabet'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
        for (alpha = 'A'; alpha <= 'Z'; alpha++)
        {
                putchar(tolower(alpha));
        }
        return (0);
}
