#include <unistd.h>
#include "main.h"
/**
 * _putchar - function to print character
 * @c: argument used
 * Return: Always
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}
