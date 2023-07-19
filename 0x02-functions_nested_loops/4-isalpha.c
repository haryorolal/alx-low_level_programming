#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * Description: 'check if letter'
 * @c: the character to be checked 
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
