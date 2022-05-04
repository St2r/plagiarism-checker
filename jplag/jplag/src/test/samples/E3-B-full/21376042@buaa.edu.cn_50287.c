"""
2022-03-26 10:23:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1584 KB
Accepted | 1 * (35 / 100) | 8 ms | 1480 KB
Accepted | 1 * (60 / 100) | 15 ms | 1476 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{ 	int n,a[10001],i=1,j=1,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{scanf("%d",&a[i]);
	i=i+1;
	}
	i=1;
	while(i<=n)
	{while(j<=a[i]-1)
	{if(a[i]%j==0)
	sum=sum+j;
	j=j+1;
	}
	if(sum==a[i])
	printf("YES\n");
	else 
	printf("NO\n");
	sum=0;
	j=1;
	i=i+1;
	}
		return 0;
 }