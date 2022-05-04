"""
2022-03-28 22:41:43
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
	int x,n,i,j,sum;
	scanf("%d",&x);
	for(j=1;j<=x;j++)
	{
	sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
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