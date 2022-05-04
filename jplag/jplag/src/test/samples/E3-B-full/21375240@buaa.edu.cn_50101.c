"""
2022-03-26 14:47:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include <stdio.h>
int main() 
{
	int n, i,j;
	scanf("%d", &n);
	int x[n], sum[n];
	for(i=0;i<n;i++)
	{
		scanf("%d", &x[i]);
		sum[i]=0;
		
		for(j=1;j<x[i];j++)
		{if(x[i]%j==0)
		sum[i]+=j;
		}
		if(sum[i]==x[i])
		printf("YES\n");
		else
		printf("NO\n");
	}


	
	return 0;
}