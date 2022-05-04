"""
2022-03-26 10:08:36
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1740 KB
Accepted | 1 * (35 / 100) | 2 ms | 1692 KB
Accepted | 1 * (60 / 100) | 14 ms | 1584 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,a[10000]={0},i,sum=0,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
	}
	return 0; 
}