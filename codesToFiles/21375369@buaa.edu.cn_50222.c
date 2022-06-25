"""
2022-03-28 22:26:33
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1696 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=1,e[20],k;
	scanf("%d",&n);
	if(n>19)
	n=19;
	for(i=0;i<n;i++)
	{   e[i]=1;
		for(k=1;k-2<i;k++)
		{e[i]=1.0*e[i]/k;
		}
		sum=e[i]+sum;
	}
	printf("%.14lf",sum);
	return 0;
}