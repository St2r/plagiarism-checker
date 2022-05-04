"""
2022-03-26 09:39:01
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1664 KB
Accepted | 1 * (35 / 100) | 9 ms | 1664 KB
Accepted | 1 * (60 / 100) | 17 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,i,k,x[101];
	scanf("%d",&n);
	int sum=0;
	for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
	for(i=0;i<n;i++)
		{
			for(k=1;k<x[i];k++)
				{
					if(x[i]%k==0)
					sum+=k;
				}
			if(x[i]==sum)
			printf("YES\n");
			else
			printf("NO\n");
			sum=0;
			
		}
	
	return 0;
}