"""
2022-03-29 18:57:02
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n,b[100],c=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<b[i];j++)
		{
			if(b[i]%j==0)
			{
				c=c+j;
			}
			else
			{
				c=c;
			}
		}
		if(c==b[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		c=0;
	}
	return 0;
}