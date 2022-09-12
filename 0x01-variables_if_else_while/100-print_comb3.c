#include <stdio.h>
#include <unistd.h>

/**
 *main - this is where the program start running
 *Return:returns zero if error and non zero if no errors
 */

int main(void)
{

	int c, j;

	for (c = '0'; c <= '9'; c++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (c < j)
			{
				putchar(c);
				putchar(j);

				if (c != '8' || (c == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
