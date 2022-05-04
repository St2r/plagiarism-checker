"""
2022-03-26 09:49:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 17 ms | 1604 KB


"""

#include<stdio.h>
int main()
{
	int n,i,sum,a,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=0;
		for(j=1;j<=a/2;j++)
		{
			if(a%j==0)sum+=j;
		}
		if(sum==a)printf("YES\n");
		else printf("NO\n");
	}
}