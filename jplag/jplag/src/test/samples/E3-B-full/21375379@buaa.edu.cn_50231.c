"""
2022-03-29 23:54:17
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			sum+=j;
		}
		if(sum==a)
		printf("YES\n");	
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}