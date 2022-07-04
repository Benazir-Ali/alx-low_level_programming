#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
