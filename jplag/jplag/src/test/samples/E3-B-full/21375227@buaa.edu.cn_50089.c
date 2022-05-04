"""
2022-03-26 17:24:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 3 ms | 1668 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
	int main()
{
	int n,i,j,k=0,x[101];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{    
			k=0;
			scanf("%d",&x[i]);
			for(j=1;j<x[i];j++)
				{
					if(x[i]%j==0)
					k=k+j;
				}
			if(k==x[i])
				printf("YES\n");
			else
				printf("NO\n");	
		}
return 0;
	 
}