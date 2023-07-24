#include "main.h"
#include <unistd.h>
/**
 * _putchar - to return char
 * Return: Always 0 "Success"
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
