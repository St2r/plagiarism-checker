"""
2022-03-26 22:51:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1692 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
	int n , i , j , k , x[10010];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&x[i]);
	
	for(i=1;i<=n;i++)
	{
		k=0;
		for(j=1;j<x[i];j++)
		{
			if(x[i] % j == 0)
			k=k+j;
		}
		if(k == x[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}