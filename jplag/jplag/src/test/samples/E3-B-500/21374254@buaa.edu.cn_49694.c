"""
2022-03-27 00:55:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1668 KB

"""

#include <stdio.h>

int main() 
{
	int n;
	int a[105]={0};
	int b[105]={0};
	scanf("%d",&n);
	int i=0;
	int s=0;
	int j;
	while(i<n)
	{
		scanf("%d",&a[i]);
		j=1;
		s=0;
		while(j<a[i])
		{
			if(a[i]%j==0)
			{
				s=s+j;
			}
			j++;
		}
		if(s==a[i])
		{
			b[i]=1;
		}
		i++;
	}
	i=0;
	while(i<n)
	{
		if(b[i]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i++;
	}
	return 0;
}