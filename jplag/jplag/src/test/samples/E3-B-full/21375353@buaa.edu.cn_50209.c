"""
2022-03-26 20:34:35
AC
1.0
Accepted | 1 * (1 / 10) | 13 ms | 1664 KB
Accepted | 1 * (1 / 10) | 25 ms | 2212 KB
Accepted | 1 * (1 / 10) | 3 ms | 1704 KB
Accepted | 1 * (1 / 10) | 6 ms | 1552 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 3 ms | 1580 KB
Accepted | 1 * (1 / 10) | 4 ms | 1700 KB
Accepted | 1 * (1 / 10) | 9 ms | 1784 KB
Accepted | 1 * (1 / 10) | 13 ms | 2008 KB
Accepted | 1 * (1 / 10) | 30 ms | 2156 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,b,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=0;
		for(b=1;b<a;b++)
		{
			if(a%b==0)
			sum=sum+b;
			else
			sum=sum;
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }