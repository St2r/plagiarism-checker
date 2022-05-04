"""
2022-03-26 12:39:29
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1680 KB
Accepted | 1 * (35 / 100) | 9 ms | 1724 KB
Accepted | 1 * (60 / 100) | 13 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int n, x[101], i, j, t[101];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		int y[10001]={0}, s=0;
		scanf("%d", &x[i]);
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			{
				y[j] = j;
			}
		}
		for(j=1;j<x[i];j++)
		{
			s = s + y[j];
		}
		t[i] = (x[i]==s);
	}
	for(i=0;i<n;i++)
	{
		if(t[i])
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