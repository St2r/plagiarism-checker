"""
2022-03-27 10:48:41
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n,i=0,x,y=2,z=0;
	scanf("%d\n",&n);
	while(i<n)
	{
		y=2;
		z=0;
		scanf("%d\n",&x);
		while(y<=x)
		{
			if(x%y==0)
			{
				z=z+x/y;
			}
			y=y+1;
		}
		if(z==x)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		i=i+1;
	}
	return 0;
}