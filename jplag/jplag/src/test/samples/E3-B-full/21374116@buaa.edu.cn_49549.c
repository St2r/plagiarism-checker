"""
2022-03-29 20:25:56
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include <stdio.h>

int main()
{
	int n,x,a,sum,y;
	scanf("%d",&n);
	for (a=1;a<=n;a++)
	{
		scanf("%d",&x);
		if (x==1)
		{
			printf("YES\n");
		}
		if (x!=1)
		{
			sum = 0;
		    for(y=1;y<x;y++)
		    {
				if (x%y==0)
				{
					sum=sum+y;
		    	}
		    }
		    if(sum==x)
		    	printf("YES\n");
		    if(sum!=x)
		    	printf("NO\n");
	    }
	}
	return 0;
}