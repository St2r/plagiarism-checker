"""
2022-03-26 16:07:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1540 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{	int i,j,n,a[105],sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	sum=0;
		for(j=1;j<a[i];j++)
		{	
			if(a[i]%j==0)
			sum+=j;
						
		}
		if(sum==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}