"""
2022-03-26 12:20:58
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 3 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int a,n,sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		int i=1;
		while(i<a)
		{
			if(a%i==0)
			{
				sum+=i;
			}
			i++;
		}
		if(sum==a)
		{
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	return 0;
}