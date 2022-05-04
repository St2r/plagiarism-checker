"""
2022-03-26 13:10:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1564 KB
Accepted | 1 * (60 / 100) | 4 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n, x;
	scanf("%d\n", &n);//共需判断n个数 
	int i=0, j=0, sum=0;
	

	
	for(i=0; i<n; i++)//循环输入每一个数x，并对其做判断 
	{
		scanf("%d", &x);
		if(x==1)
    	printf("YES\n");
    	
		else 
		{
			for(j=1; j<x; j++)//从2开始试，试到x-1，看是不是x的真因子 
			{
				if(x%j==0)
		    	{
		    	sum+=j;
	    		}	
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
	}
	return 0;
}