"""
2022-03-29 22:42:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1592 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,a[30010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int sum=1;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum!=a[i])
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}