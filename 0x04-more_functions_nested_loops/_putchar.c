#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry to print
 * Description: 'Print putchar'
 * @c: argument to compute
 * Return: Always return output
 */
int _putchar(char c)
{
        return write(1, &c, 1);
}
