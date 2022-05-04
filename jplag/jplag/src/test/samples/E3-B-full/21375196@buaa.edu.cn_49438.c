"""
2022-03-26 19:12:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 3 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int sum;
	int x;
	int i,j;
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&x);
		for(j=1;j<x;j++)
		{
			if(x%j==0)
			{
				sum = sum + j;
			}
		}
		if(x==sum)
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