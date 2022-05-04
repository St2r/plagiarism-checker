"""
2022-03-29 22:19:17
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1748 KB

"""

#include<stdio.h>
int main()
{
	int x[10005];
	int n, i, j, k, sum;
	i=1;
	scanf("%d", &n);
	while(n>0)
	{
		scanf("%d", &x[i]);
		i++;
		n--;
	}

	for(k=1;k<i;k++)
	{	sum=0;
		for(j=1;j<x[k];j++)
		{
			if(x[k]%j==0)
			{
				sum+=j;
			}
		}
		if(sum==x[k])
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
	
}