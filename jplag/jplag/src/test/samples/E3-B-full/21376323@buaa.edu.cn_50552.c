"""
2022-03-29 21:28:57
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1672 KB
Accepted | 1 * (35 / 100) | 1 ms | 1704 KB
Accepted | 1 * (60 / 100) | 2 ms | 1744 KB

"""

#include<stdio.h> 
int main()
{
	int n,x[10001],k,i,sum;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{ 
	scanf("%d",&x[i]);
		for(k=1;k<x[i];k++)
		{
				if(x[i]%k==0)
				sum+=k;
				else
				sum+=0;
				}		
			if(sum==x[i])
			printf("YES\n");
			else
			printf("NO\n");
			sum=0;
		 }
		 

	return 0;
}