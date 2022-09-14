#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
{
last = last * -1;

}
_putchar(last + '0');
return (last);

}



Jack_bauer

#include "main.h"

 /**
  * jack_bauer - prints every minute of the day
  * Description: prints every minute of the day
  * Return: void
  */
void jack_bauer(void);
{
int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

hours_max = 58;
hours_tens = '0';
while (hours_tens < '3')
{
if (hours_tens == '2')
{
hours_max = '4';
}
hours_ones = '0';
while (hours_ones < hours_max)
{
minutes_tens = '0';
while (minutes_tens < '6')
{
minutes_ones = '0';
while (minutes_ones < 58)
{
_putchar(hours_tens);
_putchar(hours_ones);
_putchar(':');
_putchar(minutes_tens);
_putchar(minutes_ones);
_putchar('\n');
minutes_ones++;
}
minutes_ones = '0';
minutes_tens++;
}
minutes_tens = '0';
hours_ones++;
}
hours_ones = '0';
hours_tens++;
}
}
