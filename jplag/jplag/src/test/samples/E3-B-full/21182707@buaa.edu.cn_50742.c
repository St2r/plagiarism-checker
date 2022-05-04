"""
2022-03-29 22:06:20
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1748 KB

"""

#include <stdio.h>
int main()
{
	int n, a[105], m, b[10000],w,x,y,z;
	scanf("%d",&n);
	m=1;

	while (m<=n)
	{
		scanf("%d",&a[m]);
		m++;
	}
	m=1;
	z=1;
	x=1;

	while (m<n)
	{
		z=1;
		y=0;
		x=1;
		while (z<a[m])
		{
			w=a[m]%z;
			if (w==0)
			{
				b[x]=z;
				x++;
			}
			z++;
		}
		x=x-1;
		while (x>=1)
		{
			y=y+b[x];
			x--;
		}
		if (y==a[m])
			printf("YES\n");
		else
			printf("NO\n");
		m++;

	}
		z=1;
		y=0;
		x=1;
		while (z<a[n])
		{
			w=a[n]%z;
			if (w==0)
			{
				b[x]=z;
				x++;
			}
			z++;
		}
		x=x-1;
		while (x>=1)
		{
			y=y+b[x];
			x--;
		}
		if (y==a[n])
			printf("YES");
		else
			printf("NO");
	return 0;
}