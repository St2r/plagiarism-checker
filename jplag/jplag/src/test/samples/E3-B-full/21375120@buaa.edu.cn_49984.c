"""
2022-03-26 15:00:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 11 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1696 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,x,t,sum=0,a[105];
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&x);
		for(t=1;t<x;t++)
		{
			if(x%t==0)
			sum+=t;
		}
		if(sum==x)
		    a[i]=1;
		else
		    a[i]=2;
		sum=0;
		i++;
	}
	for(i=1;i<=n;i++)
	    if(a[i]==1)
	        printf("YES\n");
	    else
	        printf("NO\n");
	return 0;
}