#include "main.h"
/**
 * jack_bauer - function that prints every minute os the day of Jack Bauer, starting
 * from 00:00 to 23:59, min loop counts minutes, while hour loop counts hours
 * and restets minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;
	int hours_remainder;
	int minutes_remainder;
	while (hour <= 23)
	{
	while (minutes <= 59)
	{
	minutes_remainder = minutes % 10;
	hours_remainder = hour % 10;
	_putchar(hour / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hour++;
	minutes = 0;
	}
}
