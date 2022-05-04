"""
2022-03-26 21:27:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,sum=0,g;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
				sum+=j;
		}
		if(sum==a[i])
			printf("YES\n");
		else
			printf("NO\n");
		sum=0;
	}
	return 0;
}