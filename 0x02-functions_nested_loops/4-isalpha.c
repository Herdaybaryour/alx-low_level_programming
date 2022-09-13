#include "main.h"
/**
 * _isalpha - function to check for lower charatecer
 * @c: int using the the function
 * Return: 0 always
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'a')
	{
		return (1);
	}
	else
		return(0);
}
