"""
2022-03-29 20:27:31
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int  n,i,a[100],b,c;
	i=1,b=1,c=0;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;
	while(i<=n)
	{
		while(b<a[i])
		{
			if(a[i]%b==0)
			{
				c=c+b;
			}
			b=b+1;
		}
		if(c==a[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i=i+1;
		b=1;
		c=0;
	}
	return 0;
}