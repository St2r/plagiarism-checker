"""
2022-03-29 21:05:57
REP
0.1
Accepted | 1 * (1 / 10) | 0 ms | 1652 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1688 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1660 KB
Wrong Answer | 0 * (2 / 10) | 0 ms | 1640 KB
Runtime Error (SIGFPE) | 0 * (4 / 10) | 132 ms | 1436 KB

"""

#include<stdio.h>
int main ()
{
	int a,b,c,i,n;
	double e;
	scanf("%d",&n);
	a=0;b=1;
	for(i=1;i<=n;i++)
	{
		b*=i;
		c=(1/b);
	    a=a+c;
	}
	 e=1+a;
	printf("%.14f",e);
	return 0;
}