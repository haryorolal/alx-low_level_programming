#include<unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On Success
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
