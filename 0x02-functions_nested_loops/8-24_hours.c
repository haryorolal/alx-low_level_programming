#include "main.h"
/**
 * jack_bauer - Main Entry
 * Description: 'print time'
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 50; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
