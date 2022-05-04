"""
2022-03-29 01:16:59
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1728 KB
Accepted | 1 * (60 / 100) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,x,ys[10000],sum;
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<=x/2+1;j++)
		{
			if(x%j==0) sum=sum+j;
		}
		if(sum==x) printf("YES\n");
		else printf("NO\n");
		sum=0;
	}
	return 0;
}