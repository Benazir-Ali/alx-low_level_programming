#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Success
 */
int mian(void)

{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);
			if (ch != 56 || n != 57)
			{
				putchar(44);
				putchar(32);
			}

		}
	}

	putchar('\n');

	return (0);

}


