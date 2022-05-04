"""
2022-03-29 23:19:09
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 1 ms | 1704 KB
Accepted | 1 * (60 / 100) | 7 ms | 1700 KB

"""

#include <stdio.h>

int main()
{
	int c,b,n,i, j;
	long long a[10001],d[100000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}	
	b = 1; 
	i = 1;
	for(i=1;i<=n;i++)
	{ 
		j = 1;
		c = 0;
		for(b=1;b<a[i];b++)
		{
			if(a[i]%b == 0)
			{
				d[j] = b;
				j++;
			}  
		} 
		for(j = j - 1 ;j>=1;j--)
		{
			c = c + d[j];
		}
		if(c == a[i])
		{
			if (i < n)
			{
				printf("YES\n");
			}
			else
			{
				printf("YES");
			}
		}	
		else
		{
			if (i < n)
			{
				printf("NO\n");
			}
			else
			{
				printf("NO");
			}
		}
	}	
	return 0;
}