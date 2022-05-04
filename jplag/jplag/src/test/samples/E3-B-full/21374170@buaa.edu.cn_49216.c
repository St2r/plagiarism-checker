"""
2022-03-27 23:51:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,sum,j;
	scanf("%d",&n);
	j=0;
	while(scanf("%d",&x)!=EOF)
	{
		sum=0;
		for(i=1;i<=x-1;i++)
		{
			if(x%i==0)
			sum+=i;
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}