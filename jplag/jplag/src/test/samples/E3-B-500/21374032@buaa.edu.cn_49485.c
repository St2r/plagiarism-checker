"""
2022-03-26 23:46:47
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int m,n,x,i,j,k;
	int sum=1;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		/*if(x%2==0)
		m=x/2;
		else
		m=(x+1)/2;*/
		for(j=2;j<x;j++)
		{
			if(x%j==0)
			{
				k=x/j;
				sum+=k;
			}
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
		getchar();
		sum=1;
	}
	return 0;
	
}