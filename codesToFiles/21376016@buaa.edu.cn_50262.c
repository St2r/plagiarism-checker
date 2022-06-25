"""
2022-03-27 13:32:16
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1672 KB
Accepted | 1 * (1 / 10) | 13 ms | 1620 KB
Accepted | 1 * (2 / 10) | 12 ms | 1692 KB
Accepted | 1 * (2 / 10) | 7 ms | 1640 KB
Accepted | 1 * (4 / 10) | 7 ms | 1644 KB
 1640 KB
Runtime Error (SIGSEGV) | 0 * (1 / 8) | 248 ms | 1364 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 824 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a,b=1;
		for(a=i;a>0;a--)
		{
			b=b*a;
		}
		sum+=1.0/b;
	}
	printf("%.14f",sum+1);
	return 0;
}