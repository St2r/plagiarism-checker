"""
2022-03-29 21:52:14
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
#define eps 1e-14
int main()
{
	int i,n;
	double k=1.0,sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		sum=sum+k;
		if(k<eps)
			break;
		k=k/i;
	}
	printf("%.14lf",sum);
	return 0;
}