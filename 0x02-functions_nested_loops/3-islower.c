#include "main.h"
/**
 * islower - function to print lower alphabet
 *
 * Return:0 always
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
		return (0);
}
