"""
2022-03-26 10:07:26
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 14 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	int n,x,sum,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		sum=1;
		for(i=2;i<=x-1;i++)
		{
			if(x%i==0) sum=sum+i;
		}
		if(sum==x) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}