<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
=======
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
	if (num == 9)
		continue;	
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
>>>>>>> 5d4c1ee206f3cc30087a18907556994b4280efec
