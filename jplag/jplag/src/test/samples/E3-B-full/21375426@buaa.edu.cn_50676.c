"""
2022-03-27 10:07:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 3 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int a[1000],c[1000];
	int n,i,b;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		scanf("%d",&a[i]);
		c[i]=0;
	}
	for(i=1;i<=n;i=i+1)
	{
		for(b=1;b<=a[i]/2;b=b+1)
		{
			if(a[i]%b==0)
			c[i]=c[i]+b;
		}
		if(c[i]==a[i])
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