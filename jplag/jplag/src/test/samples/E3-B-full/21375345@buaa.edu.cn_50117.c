"""
2022-03-26 20:35:48
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1672 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1712 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB



"""

#include<stdio.h>
int main()
{
	int n,i,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		int p=1;
		for(y=2;y*y<=x;y++)
		{
			if(x%y==0)
			{
				if(y*y!=x)
				p+=(y+x/y);
				else
				p+=y;
			}
		}
		if(p==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}