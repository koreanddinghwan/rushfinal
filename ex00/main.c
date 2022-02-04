#include "rush01.c"
#include <stdio.h>

int		main()
{
	int i;
	int j;
	i = -1;
	j = -1;

	while (i < 10)
	{
		j = -1;
		while (j < 10)
		{
			printf("\n==rush test==\n");
			printf("rush(%d, %d)\n", i, j);
			rush(i,j);
			printf("\n");
			printf("\n=============\n");
			j++;
		}
		i++;
	}

	return 0;
}
