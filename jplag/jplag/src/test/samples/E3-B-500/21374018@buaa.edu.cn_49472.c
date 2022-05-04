"""
2022-03-29 19:52:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i,j,sum;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d", &a);
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			sum=sum+j;
			else
			sum=sum;
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}