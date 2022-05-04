"""
2022-03-27 10:29:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=0;
		for(j=x-1;j>1;j--)
		{
			if(x%j==0)
				y = y + j;
		}
		y+=1;
		if(y==x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}