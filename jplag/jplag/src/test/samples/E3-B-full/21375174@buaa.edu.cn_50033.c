"""
2022-03-27 23:49:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1536 KB
Accepted | 1 * (35 / 100) | 2 ms | 1536 KB
Accepted | 1 * (60 / 100) | 3 ms | 1600 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x); 
		for(i=1;i<x;i++)
	    {
		if(x%i==0)
		sum=sum+i;
	    }
	    if(sum==x)
	    {
	    	printf("YES\n");
	        sum=0;
	    }
	    else
	    {
	    	printf("NO\n");
	    	sum=0;
		}
	}
	return 0;
 }