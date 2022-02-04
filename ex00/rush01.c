#include "ft_putchar.c"


//줄을 그리는 함수
//여기선 출력되어야하는 가로의 문자열에 대한 정의만한다.
void	printline(int x, char start, char middle, char last)
{
	//호출된 printline함수의 x는 1 이상임이 보장된다.
	//따리사 첫 1회 출력은 보장되어야한다.
	ft_putchar(start);
	x--;
	//rush(2,2)였다면 현재 x = 1이다. <= 반복문이 실행되면 안되는 조건
	//rush(3,2)이었다면 현재 x = 2이다. <= 1회 출력되어야함.
	while (x >= 2)
	{
		ft_putchar(middle);
		x--;
	}
	//rush(2,2)였다면 현재 x = 1이다.
	//rush(1,2)이었다면 현재 x = 0이다.
	//rush(3,2)였다면 현재 x = 1이다.
	if (x == 1)
		ft_putchar(last);
	ft_putchar('\n');
}


//처음으로 호출되는 함수
//여기선 출력되어야하는 세로 크기를 정의한다.
void	rush(int x, int y)
{
	//x나 y 둘 중 하나라도 1 미만이라면 출력하면 안됨.
	if (x >= 1 && y >= 1)
	{
		//y를 줄여나가면서 각 줄을 그리는 printline함수를 호출한다.
		//printline함수는 인자로 들어온 x에따라 다른 선을 출력해야한다. => printline함수에서 조건처리
		//일단, 이 조건문에따라서 최소한 1번은 printline함수가 호출되어야한다.
		//그리고 이 줄은 반드시 첫 번째 줄 일것이다.
		printline(x, '/', '*', '\\');
		y--;

		//중간줄은 위의 y--에서 줄어든 수를 기준으로 2이상일때만 출력되어야한다.
		//예를들어, rush(2,2) 는 현재 x=2, y=1이고, 이에따라 출력되면 안된다.
		while (y >= 2)
		{
			printline(x, '*', ' ', '*');
			y--;
		}
		//rush(2,2)일때를 가정, 현재 x=2, y=1이다.
		//rush(2,3)일때, 현재 x=2, y=1이다(위의 while문에서 중간줄이 출력되었을 것.
		//rush(2,1)일때, 현재 x=2, y=0이다.<=출력되면안됨
		if (y == 1)
		{
			printline(x, '\\', '*', '/');
		}
	}
}
