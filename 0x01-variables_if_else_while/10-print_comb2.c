#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);
			if (!((num1 == '9') && (num2 == '9')))
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
