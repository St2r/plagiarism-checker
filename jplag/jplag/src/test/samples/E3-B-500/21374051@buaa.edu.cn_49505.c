"""
2022-03-26 23:15:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	int sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			{
				sum+=j;
			}
				
		}
		if(sum==a[i])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}