"""
2022-03-29 23:30:10
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], i=0, sum=0, j=1;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	i=0;
	while(i<n)
	{
		if(a[i]==1)
		{
			printf("NO\n");
			i++;
			continue;
		}
		j=1;
		while(j<a[i])
		{
			if(a[i]%j==0)
			{
				sum=sum+j;
				j++;
			}
			else
			{
				j++;
			}
			if(j==a[i])
			{
				if(sum==a[i])
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
				break;
			}
		}
		sum=0;
		j=1;
		i++;
	}
	return 0;
}