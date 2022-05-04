"""
2022-03-26 12:59:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,a;
	int i=0;
	int j=0;
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<=(a/2);j++)
		{
			if(a%j==0)
			{
			sum+=j;
			}
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}