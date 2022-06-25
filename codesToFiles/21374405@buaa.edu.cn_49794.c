"""
2022-03-27 10:47:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double e,b;
	long long a;
	a=1.0;
	e=1.0;
	scanf("%d",&n);
	if(n<=18)
	{
	for (int i=1;i<=n;i++)
	{
		a=a*i;
		b=1.0/a;
		e=e+b;
	} 
} else{
	for (int i=1;i<=18;i++)
	{
		a=a*i;
		b=1.0/a;
		e=e+b;
	} 
}
	
	printf("%.14f",e);
	return 0;
}