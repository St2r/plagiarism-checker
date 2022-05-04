"""
2022-03-28 23:12:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1580 KB
Accepted | 1 * (35 / 100) | 0 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1744 KB

"""

#include<stdio.h>

int main()
{
	int n,a[1001],i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int m=0;
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				m=m+j;
			}
		}
		if(m==a[i])
		{
		    printf("YES\n");	
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}