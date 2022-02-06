#include <unistd.h>

void	ft_putchar(char c);

void	printline(int x, char start, char middle, char last)
{
	ft_putchar(start);
	x--;
	while (x >= 2)
	{
		ft_putchar(middle);
		x--;
	}
	if (x == 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		printline(x, '/', '*', '\\');
		y--;
		while (y >= 2)
		{
			printline(x, '*', ' ', '*');
			y--;
		}
		if (y == 1)
		{
			printline(x, '\\', '*', '/');
		}
	}
}
