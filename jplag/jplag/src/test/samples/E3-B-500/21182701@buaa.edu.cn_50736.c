"""
2022-03-29 19:31:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], p=0, c=0, y=1;
	for(p=0; p<n; p++)
	{
		scanf("%d", &a[p]);
	}
	p=0;
	while(p<n)
	{
    if(a[p]==1)
		{
			printf("NO\n");
			p++;
			continue;
		}
		while(y<a[p])
		{
			if(a[p]%y==0)
			{
				c=c+y;
				y++;
			}
			else
			{
				y++;
			}
			if(y==a[p])
			{
				if(c==a[p])
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
				break;
			}
		}
		c=0;
		y=1;
		p++;
	}
	return 0;
}