"""
2022-03-26 09:28:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 3 ms | 1660 KB
Accepted | 1 * (2 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 7 ms | 1604 KB
t]
     scanf("%d",&n);
     ^~~~~~~~~~~~~~
main.c:8:9: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
         scanf("%d",&n);
         ^~~~~~~~~~~~~~


"""

#include<stdio.h>
#define eps 1e-14
int main()
{
	int i,n;
	double r=1.0,sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		sum=sum+r;
		if(r<eps)
			break;
		r=r/i;
	}
	printf("%.14lf",sum);
	return 0;
}