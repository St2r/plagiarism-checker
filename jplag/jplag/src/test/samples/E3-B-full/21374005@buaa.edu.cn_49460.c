"""
2022-03-27 23:32:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x,j,s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		s=0;
		for(j=1;j<=x-1;j++)
		{
			if(x%j==0)
			{	
				s+=j;
			}
		}
		if(s==x)
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