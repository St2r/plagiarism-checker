"""
2022-03-28 20:58:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 0 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double x=1,s=1;
	scanf("%d",&n);
	if(n<18)
	{
		for(i=1;i<=n;i++)
		{
			x*=i;
			s+=1/x;
		}
	}
	else 
	{
		for(i=1;i<=18;i++)
		{
			x*=i;
			s+=1/x;
		}
	}
	printf("%.14f",s);
}