"""
2022-03-27 17:04:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b,c,d;
	for(b=1;b<=n;b++)
	{
		scanf("%d",&a[b]);
	}
	for(b=1;b<=n;b++)
	{
		d=0;
		for(c=1;c<=a[b]-1;c++)
		{
			if(a[b]%c==0)
			{
				d+=c;
			}
		}
		if(d==a[b])
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	return 0;
}