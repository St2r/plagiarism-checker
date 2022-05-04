"""
2022-03-26 23:08:09
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include <stdio.h>

int main()
{
	int n,a[100],i=0,j=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			sum=sum+j;
		}
		if(sum==a[i])
		printf("YES\n");
		
		else
		printf("NO\n");
		sum=0;
	}
	
	return 0;
}