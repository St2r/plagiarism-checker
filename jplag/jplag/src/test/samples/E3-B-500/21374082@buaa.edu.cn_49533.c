"""
2022-03-29 14:28:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int a[10011];
int main()
{
	int b,c,d,n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		d=0;
		for(j=1;j<=b-1;j++)
		{
			if(b%j==0)
			{
				d+=j;
			}
		}
		if(d==b)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}