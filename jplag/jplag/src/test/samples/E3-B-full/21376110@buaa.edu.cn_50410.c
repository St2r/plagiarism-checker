"""
2022-03-26 15:44:55
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1488 KB
Accepted | 1 * (1 / 10) | 10 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 9 ms | 1584 KB
Accepted | 1 * (1 / 10) | 5 ms | 1492 KB
KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,sum;
	scanf("%d",&n);
	while(n--)
	{
		sum=0;
		scanf("%d",&x);
		for(i=1;i<x;i++)
		{
			if(x%i==0) sum+=i;
		}
		if(sum==x) printf("YES\n");
		else printf("NO\n");
	 } 
	return 0;
}