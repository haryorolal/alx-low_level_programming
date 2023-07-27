#include "main.h"
/**
 * cap_string - function that capitalizes
 * @b: argument
 * Return: Always return
 */
char *cap_string(char *)
{
	int i;

	if (b[0] >= 'a' && b[0] <= 'z')
	{
		b[0] = b[0] - 32;

		for (i = 0; b[i] != '\0'; i++)
		{
			if ((b[i] >= 'a' && b[i] <= 'z') && 
				(b[i - 1] == " " || b[i - 1] == '\t' || b[i - 1] == '\n' || 
				b[i - 1] == "." || b[i - 1] ==  ";" || b[i - 1] == "-" || 
				b[i - 1] == "!" || b[i - 1] == '"' || b[i - 1] == "{" || 
				b[i - 1] == "}" || b[i - 1] == "(" || b[i - 1] == ")")))
			{
				b[i] = b[i] - 32; 
			}
		}
	}
	return (b);
}
