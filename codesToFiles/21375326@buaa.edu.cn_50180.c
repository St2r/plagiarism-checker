"""
2022-03-29 22:48:53
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double sum,r;
	sum=1; 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
          if(i>1000)
           break;
		r=1;
		for(j=1;j<=i;j++)
		{
			r*=j;
		}
		r=1.0/r;
		sum+=r;
	}
	printf("%.14lf",sum);
	return 0;
}