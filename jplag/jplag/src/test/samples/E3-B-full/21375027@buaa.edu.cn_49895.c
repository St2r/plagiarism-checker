"""
2022-03-26 14:34:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include<stdio.h>

#define FOR(i,n) for(i = 0;i < n; i++)

int main()
{
	int n,x,i,j;
	int sum;
	scanf("%d",&n);
	FOR(i,n)
	{
		scanf("%d",&x);
		sum = 0;
		for(j = 1;j <= (x/2); j++)
		{
			if(x%j == 0)
			sum += j;	
		}
		if(sum == x)
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}