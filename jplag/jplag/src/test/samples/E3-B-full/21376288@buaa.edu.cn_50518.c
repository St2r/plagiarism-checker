"""
2022-03-29 18:56:19
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1568 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int sum(int y);
int main()
{
	int x,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		if(sum(x)==x)
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
int sum(int y)
{
	int i, sum=0;
	for(i=1;i<y;i++)
	{
		if(y%i==0)
		sum += i;
	}
	return sum;
}