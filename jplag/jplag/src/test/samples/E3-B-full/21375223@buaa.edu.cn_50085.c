"""
2022-03-26 10:22:46
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 19 ms | 1648 KB

"""

#include<stdio.h>

int main()
{
	int n,a;
	int i;
	scanf("%d",&n);
	while(n--)
	{
		int sum=2;
		scanf("%d",&a);
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
			sum+=i+a/i;
			}
		}
		sum/=2;
		if(sum==a) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
 }