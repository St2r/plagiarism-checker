"""
2022-03-27 10:27:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1596 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,x[100],sum,i,j;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		sum = 0;
		scanf("%d",&x[i]);
		for(j = 1;j <= x[i]/2;j++)
		{
			if(x[i]%j==0)
				sum += j;
		}
		if(sum == x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}