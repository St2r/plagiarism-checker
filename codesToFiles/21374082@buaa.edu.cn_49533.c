"""
2022-03-29 14:40:47
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1636 KB

"""

#include<stdio.h>
int a[10011];
long long owo(int);
int main()
{
	int a,b,c,n,i;
	double x,y,z;
	scanf("%d",&n);
	x=1;
	for(i=1;i<=n;i++)
	{
		y=1/(1.0*owo(i));
		x+=y;
		if(i>=21)
		{
			break;
		}
	}
	printf("%.14lf",x);
	return 0;
}
long long owo(int t)
{
	long long p,i;
	p=1;
	for(i=1;i<=t;i++)
	{
		p*=i;
	}
	return p;
}