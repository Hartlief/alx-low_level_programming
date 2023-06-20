#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: number of times table 
 * 
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
		
		     for (j = 1; j <= n; j++)
			{
				k = j * k
			        if(j == 0)
				{
				        _putchar('0');
				}else if(k < 10 && j !=0)
				{
				        _putchar('.');
					_putchar('
				


				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
