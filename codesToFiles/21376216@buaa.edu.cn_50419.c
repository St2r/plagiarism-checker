"""
2022-03-26 15:04:40
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 3 ms | 1632 KB


"""

#include <stdio.h>
double jishu(unsigned int a)
{
	unsigned int sum;
	double i;
	sum = a;
	a --;
	while(a)
	{
		sum *= a;
		a --;
	}
	i = 1.0/sum;
	return i;
}
int main()
{
	unsigned int a;
	double b;
	b = 1;
	scanf("%u", &a);
	if(a > 33)
		a = 33;
	while(a)
	{
		b += jishu(a);
		a --;
	}
	printf("%.14f", b);
	return 0;
}