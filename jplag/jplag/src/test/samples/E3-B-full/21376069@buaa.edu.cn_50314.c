"""
2022-03-28 17:39:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 3 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y,u,p;
	scanf("%d",&n); 
	for(int b=0;b<n;b++)
	{
		scanf("%d",&u);
		y=0;
		for(int i=1;2*i<=u;i++)
		{
			if(u%i==0)
			{
				y+=i;
			}
		}

		if(y==u)
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