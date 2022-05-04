"""
2022-03-28 22:06:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n+5];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}