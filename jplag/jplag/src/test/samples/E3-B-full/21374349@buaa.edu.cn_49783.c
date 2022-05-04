"""
2022-03-26 12:59:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 16 ms | 1704 KB

"""

#include <stdio.h>
#include<math.h>
int main()
{
    long long n,x[100],i,sum,y;
	scanf("%lld",&n);
	y=1;
	sum=0;
	for (i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	for (i=0;i<n;i++)
    {
    	for(y=1;y<x[i];y++)
    	{if(x[i]%y==0)
    	sum+=y;
		}
		if(sum==x[i])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}

return 0;
}