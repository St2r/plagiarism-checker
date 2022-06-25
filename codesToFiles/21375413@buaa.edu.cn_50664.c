"""
2022-03-27 10:46:49
TLE
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1612 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 872 KB

"""

#include<stdio.h>
int main ()
{
	int n,x,i,a;
	
	double sum,b;
	sum=0;
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		a=1;  //注意该句的位置！不能把它写在最前面 ？ 
		for(i=1;i<=x;i++)
		{
			a=a*i;
			
		}
		b=(double)1/a;
		sum=sum+b;
	}
	printf("%.14f",sum+1);
	return 0;
}