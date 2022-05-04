"""
2022-03-26 13:08:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 8 ms | 1624 KB
Accepted | 1 * (2 / 10) | 8 ms | 1624 KB
Accepted | 1 * (4 / 10) | 11 ms | 1616 KB

"""

#include<stdio.h>
int main()
{
	int n,x,sum,j=0;
	scanf("%d",&n);
	while(j<n)
	{
		sum=0;
		j++;
		scanf("%d",&x);
		for(int i=1;i<x-1;i++)
		{
			if(x%i==0)
			sum+=i;
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;

}