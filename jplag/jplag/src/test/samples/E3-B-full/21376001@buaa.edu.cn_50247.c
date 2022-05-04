"""
2022-03-26 17:13:52
AC
1.0
Accepted | 1 * (1 / 8) | 16 ms | 1636 KB
Accepted | 1 * (1 / 8) | 11 ms | 1656 KB
Accepted | 1 * (1 / 8) | 10 ms | 1664 KB
Accepted | 1 * (1 / 8) | 11 ms | 1620 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Accepted | 1 * (1 / 8) | 12 ms | 1660 KB
Accepted | 1 * (1 / 8) | 9 ms | 1712 KB
Accepted | 1 * (1 / 8) | 15 ms | 1664 KB
KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	int a[100];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j == 0) sum += j;
		}
		
		if(sum==a[i]) printf("YES\n");
		else printf("NO\n");
		sum=0;		
	}
	return 0;
}