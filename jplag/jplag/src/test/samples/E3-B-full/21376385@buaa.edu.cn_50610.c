"""
2022-03-27 10:32:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		int m=1,sum=0;
		for(m;m<a[i];m++)
		{
			if(a[i]%m==0)
			{
				sum+=m;
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
	}
}