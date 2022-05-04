"""
2022-03-26 22:19:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1672 KB
Accepted | 1 * (35 / 100) | 3 ms | 1584 KB
Accepted | 1 * (60 / 100) | 5 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
{
	int m,sum=0,a[10000]={0};
	scanf("%d",&m);
	for(j=1;j<m;j++)
	{
		if(m%j==0)
		{
			a[j]=j;
		}
	}
	for(j=0;j<m;j++)
	{
		sum=sum+a[j];
	}
	if(sum==m)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}	return 0;
}