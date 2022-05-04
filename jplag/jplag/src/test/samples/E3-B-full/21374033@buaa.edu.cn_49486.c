"""
2022-03-26 23:09:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,x,a=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		for(int j=2;j<x;j++)
		{
			if(x%j==0)
			a+=j;			
		}
		if(x==a)
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
		a=1;
	}
	return 0;
}