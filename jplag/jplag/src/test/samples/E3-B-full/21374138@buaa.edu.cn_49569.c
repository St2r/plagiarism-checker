"""
2022-03-26 11:05:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1592 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 12 ms | 1652 KB


"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d\n",&n);
	int i=0,x[100];
	while(i<n)
	{
		scanf("%d\n",&x[i]);
		i=i+1;
	}
	int k=0;
	while(k<n)
	{
		int j=1,m=0;
		while(j<x[k])
		{
			if(x[k]%j==0)
			{
				m=m+j;
			}
			j=j+1;
		}
		if(m==x[k])
		{
			printf("YES\n");
		}
		else 
		{
		printf("NO\n");
	}
		k=k+1;
	}
	
		
		
	
	return 0;
}