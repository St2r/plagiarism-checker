"""
2022-03-29 23:26:16
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=0 ,a,j,sum;
	while(scanf("%d",&a)&&i<n)
	{
		sum=0;
		i=i+1;
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			sum=sum+j;
		}
		if(sum==a)
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