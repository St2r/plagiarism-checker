"""
2022-03-29 01:31:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	double ans,sum;
	ans=1.0;
	sum=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>1;j--) sum=sum*j;
		ans=ans+1.0/sum;
		sum=1.0;
		if(ans>=2.7182818284590452353) break;
	}
	printf("%.14f",ans);
	return 0;
}