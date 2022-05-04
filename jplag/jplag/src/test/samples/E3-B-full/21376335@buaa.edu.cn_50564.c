"""
2022-03-29 22:06:44
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int i,j,a,n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			sum+=j;
			else
			sum+=0;
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	
	return 0;
}