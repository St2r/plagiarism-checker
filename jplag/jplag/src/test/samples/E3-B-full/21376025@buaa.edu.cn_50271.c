"""
2022-03-26 08:37:19
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 9 ms | 1608 KB
Accepted | 1 * (1 / 4) | 16 ms | 1664 KB
Accepted | 1 * (1 / 4) | 14 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i,sum=0;
	scanf("%d",&n);
	while(n--) 
	{
		scanf("%d",&a);
		for(i=1;i<a;i++)
		{
		if(a%i==0)
		{
			sum+=i;
		}
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }